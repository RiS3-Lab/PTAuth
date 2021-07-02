PATH=/clang_6.0.0/bin/:$PATH

rm -rf CMakeCache.txt CMakeFiles/ Makefile cmake_install.cmake instrument/CMakeFiles/ instrument/Makefile instrument/libPTAuthpass.so instrument/*.bc instrument/ptauth.o

cmake .
make

cd Test
cd ../instrument
clang  -c -emit-llvm --target=aarch64-linux-gnu -march=armv8.3-a  ptauth-rtlib.c -fno-stack-protector
clang  -c -emit-llvm --target=aarch64-linux-gnu -march=armv8.3-a  utils.c -fno-stack-protector
clang  -c -emit-llvm --target=aarch64-linux-gnu -march=armv8.3-a  pacinst.c -fno-stack-protector

llc -O3 -filetype=obj ptauth-rtlib.bc

cd ../Test
clang -g -c -emit-llvm --target=aarch64-linux-gnu -march=armv8.3-a toyexample.c -fno-stack-protector -O0
cd ../

opt -load instrument/libPTAuthpass.so -ptauth < Test/toyexample.bc > instrumented.bc
#llvm-dis instrumented.bc

#### Linking process with our runtime library
llvm-link instrument/ptauth-rtlib.bc instrument/utils.bc instrument/pacinst.bc  instrumented.bc -o extfunc_optimized.bc
#llvm-link Test/toyexample.bc  instrument/ptauth-rtlib.bc instrument/utils.bc  instrument/pacinst.bc -o extfunc_optimized.bc

llvm-dis extfunc_optimized.bc

### Generating an object out of the linked BC file
#llc -O3 -filetype=obj extfunc_optimized.bc

### Creating ELF file from the object
# UBSAN version for debugging
#clang -mllvm -inline-threshold=100000 --target=aarch64-linux-gnu -fsanitize=undefined  -fno-omit-frame-pointer -march=armv8.3-a extfunc_optimized.bc -o stest.arm.elf -lm  -fno-stack-protector  -O3  -g
clang -mllvm -inline-threshold=100000 --target=aarch64-linux-gnu -march=armv8.3-a extfunc_optimized.bc -o stest.arm.elf -lm  -fno-stack-protector  -O3  -g          
