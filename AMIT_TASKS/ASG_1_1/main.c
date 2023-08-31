
/* *******************************************************
Name    : Ahmed Ferganey
assing  : 1_1
******************************************************* */

/*

Write a program that take a number from user using scanf,

    lf the number was even print the following two sentences:
        “The number is odd=0”
        “The number is even=1”

And if the number was odd print the following two sentences:
        “The number is odd=1”
        “The number is even=0”

        Do not use this operator( % )
*/

#include <stdio.h>
#include <stdlib.h>


int num;

int main()
{
    printf("please enter num : \n");
    scanf("%d", &num);
    num=num&1;


    if (num==0)
    {
        printf("The number is even=1 \nThe number is odd=0 \n");

    }
    else
    {
        printf("The number is odd=1 \nThe number is even=0 \n");

    }

    return 0;
}
