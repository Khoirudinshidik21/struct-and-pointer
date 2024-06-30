#include <stdio.h>

int main() {
    int var = 20;   // actual variable declaration
    int *ptr;       // pointer variable 

    ptr = &var;     // store address of var in pointer variable

    printf("Value of var variable: ");
    printf("%d\n", var );

    // print the address stored in pointer variable
    printf("Address stored in ptr variable: ");
    printf("%p\n", ptr );

    // access the value at the address available in pointer
    printf("Value of *ptr variable: ");
    printf("%d\n", *ptr );

    return 0;
}
