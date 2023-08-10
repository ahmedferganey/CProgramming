/* **************************************************************************************************************
                                            Name    : Ahmed Ferganey
                                            inst    : eng-gozef hana
************************************************************************************************************** */

/*
 Write a C Function that checks if an integer is even or odd.
*/

#include <stdio.h>


void evenorodd (int x);

int main ()
{
    int a;
    evenorodd(a);
    return 0;
}

void evenorodd (int x)
{
    printf("please enter number: ");
    scanf(" %i",&x);
    x=x&1;
    if (x == 0)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }
    return 0;
}
