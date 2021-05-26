# CMake Template

## Summary
A template for CMake projects including GoogleTest.

## How to build

### Linux
```
mkdir build && cd build
cmake .. -DCMAKE_TOOLCHAIN_FILE=../cmake/toolchain_gcc.cmake
cmake --build .
```
