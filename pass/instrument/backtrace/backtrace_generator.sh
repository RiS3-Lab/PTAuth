rm final.bc
/home/ubuntu/clang+llvm-6.0.1-aarch64-linux-gnu/bin/llvm-link extfunc_optimized.bc /home/ubuntu/ptauth/backtrace.bc -o final.bc
/home/ubuntu/clang+llvm-6.0.1-aarch64-linux-gnu/bin/clang++ --target=aarch64-linux-gnu final.bc -lunwind -o stest.arm.elf -g
