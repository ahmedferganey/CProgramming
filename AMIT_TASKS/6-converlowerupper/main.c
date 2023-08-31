/* **************************************************************************************************************
                                            Name    : Ahmed Ferganey
                                            inst    : eng-gozef hana
************************************************************************************************************** */

/*
       Write a C Function that reads two integers and checks if the first is multiple of the second.
*/

#include <stdio.h>

void checkmultiple (int x,int y);

int main ()
{
    int a,b;
    checkmultiple(a,b);
    return 0;
}

void checkmultiple (int x,int y)
{
    printf("please enter first  number :");
    scanf(" %i",&x);
    printf("please enter second number :");
    scanf(" %i",&y);
    if ((x%y) == 0)
    {
        printf("the first number   is   multiple of the second");
    }
    else
    {
        printf("the first number is not multiple of the second");
    }
    return 0;
}
