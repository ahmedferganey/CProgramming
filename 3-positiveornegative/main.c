/* *******************************************************
Name    : Ahmed Ferganey
inst    : eng-gozef hana
******************************************************* */




/*

Write a C Function that check if the number if positive or negative.

*/

#include <stdio.h>

void checknumber (double x);

int main ()
{
    double a;
    checknumber(a);
    return 0;
}

void checknumber (double x)
{
    printf("PLEASE ENTER NUMBER :  \n");
    scanf(" %lf",&x);
    if(x >= 0)
    {
        printf("  %lf is the positive number \n",x);
    }
    else if (x < 0)
    {
        printf("  %lf is the negative number \n",x);
    }
    else
    {
        printf ("error");
    }

    return 0;
}
