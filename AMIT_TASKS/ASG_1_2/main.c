
/* *******************************************************
Name    : Ahmed Ferganey
assing  : 1_2
******************************************************* */

/*

Write a program to input any number from user and toggle or invert nth bit
of the given number using bit wise operator
*/

#include <stdio.h>
#include <stdlib.h>

int numone,numtwo,numthree;

int main()
{

    printf("enter num to toggle it: \n");
    scanf("%d",&numone);
    printf("enter nth bit to toggle (0:31): \n");
    scanf("%d",&numtwo);
    printf("bit toggled sucessfully. \n\n\n\n");
    printf("num before toggling : %d  \n",numone);


    numthree= numone ^ (1<<numtwo);
    printf("num after toggling : %d  \n",numthree);


    return 0;
}
