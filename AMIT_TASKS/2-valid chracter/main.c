/* *******************************************************
Name    : Ahmed Ferganey
inst    : eng-gozef hana
******************************************************* */

/* Write a C Function that takes one character and checks
	if it alphabet or not. */


#include <stdio.h>



void checkcharacter (char x);
char x;


int main()
{
    char a;
    checkcharacter (a);

    return 0;
}


void checkcharacter (char x)
{
    printf("please enter alphabet: %c",x);
    scanf(" %c",&x);
    if ( (x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z') )
    {
        printf("valid alphabet");
    }
    else
    {
        printf("error, please enter valid alphabet");
    }



    return 0;
}
