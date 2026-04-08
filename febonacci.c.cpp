/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

// Iterative method
void iterative(int n) {
    int a = 0, b = 1, c;
    printf("Iterative: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

// Recursive method
int recursive(int n) {
    if(n <= 1)
        return n;
    return recursive(n-1) + recursive(n-2);
}

int main() {
    int n = 10;
    
    iterative(n);

    printf("\nRecursive: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", recursive(i));
    }

    return 0;
}



    

    
