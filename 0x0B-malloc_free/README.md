# Automatic and Dynamic Allocation in C

This repo contains code examples of automatic and dynamic memory allocation in C. This includes topics such as malloc and free, as well as stack and heap memory management.

## Automatic Memory Allocation

In C, variables declared outside of a function are stored in the stack. This is known as automatic memory allocation. When a variable is declared in this way, the compiler sets aside space for it in the stack. This space is then freed once the variable goes out of scope.

## Dynamic Memory Allocation

Dynamic memory allocation is used to allocate memory at runtime. This is done with the standard C library functions malloc and free. The malloc function requests a certain amount of memory from the operating system. The free function then releases that memory back to the system once it is no longer needed.
