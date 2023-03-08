# Recursion in C

This repository is a collection of resources for learning and practicing recursion in the C programming language.

Recursion is a powerful programming technique that allows for the solving of complex problems in a simple and elegant way. To be able to use recursion effectively, it is important to have a thorough understanding of how it works and how to apply it to different types of problems.

## What is Recursion?

Recursion is a programming technique in which a function calls itself repeatedly until a certain condition is met. This allows us to write code that can solve complex problems without having to write a lot of code. For example, if we wanted to calculate the factorial of a given number n, we could write a recursive function to do it in the following way:
```c
int factorial(int n) 
{ 
    // Base Case 
    if (n == 0) 
        return 1; 
  
    // Recursive Case 
    return n * factorial(n - 1); 
} 
```

The factorial of a number is calculated by multiplying the number by the factorial of its predecessor. By using recursion, we can calculate the factorial
