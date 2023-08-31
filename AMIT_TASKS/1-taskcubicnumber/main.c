
/* *******************************************************
Name    : Ahmed Ferganey
inst    : eng-gozef hozifa
******************************************************* */

// Write a C Function that prints the cube of any number.

#include <stdio.h>
#include <stdlib.h>


int cubeee(int x);
int z;


int main (void)
{
    z = cubeee(-5);
    return 0;

}


int cubeee(int x)
{
    int cubic_number;
    cubic_number = (x*x*x);
    printf("cubic_number = %i",cubic_number);
    return cubic_number;
}
