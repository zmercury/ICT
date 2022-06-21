### June 20

## Programming

### Functions in C

- In c, we can divide a large program into the basic building blocks known as function
- The function contains the set of programming statements enclosed by {}
- A function can be called multiple times to provide reusebility and modularity to the c program.
- In other words, we can sat that the collection of functions creates a program.
- The dunction is also known as procedure or subrouting in other programming languages.

Function is a block of code which perform some task when it is called. It helps in code reusability in c program. 

There are two types of functions in c.
- Library Function: Library Function ate those functions which are already presented in c library. Library function cannot be used as user defined function. The function of library finction is already defined in c.
- User Defined Function: Those function which are declared by the user are known as user defined Function. The task of thses functions are determined bt the user.

Function Aspects
-

- Function Declaration

    - Giving the name of a function, data type of functiin and parameter/variables.
    
    - Syntax

    ```c
    #include <stdio.h>
    int area ( int length, int breath );

    int main() {
        area();
    }

    int area() {
        statement;
    }
    ```
    - eg: int area(int, int);


- Function call
- Function Defination

