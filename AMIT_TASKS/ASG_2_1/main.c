/* **************************************************************************************************************
                                            Name    : Ahmed Ferganey
                                            inst    : eng-gozef hana
************************************************************************************************************** */

/*
    Implement a calculator program that asks the user to enter a mathematical
    operator [+or—or*or/]then enter number_1 and number_2 and display the result.
    Enter number_1 first then operator then number_2.
*/

#include <stdio.h>

int operation (int x,int y,int z);

int main ()
{
    int a,b,c;
    operation(a,b,c);
    return 0;
}

int operation (int x,int y,int z)
{
    int result;
    printf("please enter number_one: " );
    scanf(" %i",&x);
    printf("please enter operation : " );
    scanf(" %c",&z);
    printf("please enter number_two: " );
    scanf(" %i",&y);


    switch  (z)     //switch must recieve int or char
    {
    case  '+' :   //must add single qutation between operators
        result = x + y;
        break;
    case  '-' :   //must add single qutation between operators
        result = x - y;
        break;
    case  '*' :   //must add single qutation between operators
        result = x * y;
        break;
    case  '/' :   //must add single qutation between operators
        result = x / y;
        break;
    }
    printf("THE RESULT: %i",result);
    return result;
}
