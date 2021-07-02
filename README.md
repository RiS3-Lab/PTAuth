PTAuth: Temporal Memory Safety via Robust Points-to Authentication
===

This repository contains the prototype of the PTAuth paper which appears in the 30th USENIX Security Symposium. PTAuth repurposes the Pointer Authentication Code (PAC) extension of ARMv8.3 to provide temporal memory safety. For further details, [please read our paper](https://www.usenix.org/conference/usenixsecurity21/presentation/mirzazade).

# Getting started
PTAuth is comprised of two major components. A runtime library and an LLVM pass to instrument the C source codes. The instrumentation components use LLVM bitcode. As a result, PTAuth should have access to the entire bitcode of the source code. The current implementation is based on the [Top-Byte Ignore](https://en.wikichip.org/wiki/arm/tbi) feature. Also, the PAC instructions are replaced with the software implementation to evaluate our system on an SoC that does not support PAC instructions. The current implementation uses a cross-compile approach. The input of the PTAuth pass is an LLVM bitcode file and the output is an instrumented ARM64 ELF binary.


# How to build PTAuth image
```
$ docker pull rezamirz/ptauth_image:latest
$ git clone git@github.com:RiS3-Lab/PTAuth.git
$ cd PTAuth
```

# How to test PTAuth
```
$ ./runPTAuth.sh
```
As PTAuth requires the whole LLVM bitcode of a project, we developed a few bash scripts to automate the process of extracting and instrumenting the bitcode using the Docker image of PTAuth. By default, the `runPTAuth.sh` script extracts the bitcode of the the [toyexample.c](pass/Test/toyexample.c) and instruments it. The final output is an instrumented binary which is called `stest.arm.elf` in the [pass](pass/) folder. This binary is executable on a system that supports ARMv8 instruction sets. Other sample bash scripts for automating the extraction/instrumentation of apps are also included. You can also use [wllvm](https://github.com/travitch/whole-program-llvm) to extract the whole bitcode of an application.


# Citation

If your research finds one or several components of PTAuth useful, please cite our paper:

```
@inproceedings{farkhani2021ptauth,
  title={PTAuth: Temporal Memory Safety via Robust Points-to Authentication},
  author={Farkhani, Reza Mirzazade and Ahmadi, Mansour and Lu, Long},
  booktitle={30th $\{$USENIX$\}$ Security Symposium ($\{$USENIX$\}$ Security 21)},
  year={2021}
}
```
