/* *******************************************************
Name    : Ahmed Ferganey
inst    : eng-gozef hanna
******************************************************* */

// Write a C Function that prints the cube of any number.

#include <stdio.h>
#include <stdlib.h>


void cubeee(int *x);


int main (void)
{
    int z = -5;
    cubeee (&z);
    printf("%i",z);
    return 0;

}


void cubeee(int *x)
{
    (*x) = ((*x)*(*x)*(*x));
    return 0;
}
