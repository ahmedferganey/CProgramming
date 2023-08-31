/* **************************************************************************************************************
                                            Name    :   Ahmed Ferganey
                                            inst    :   eng-gozef hana
                                            assign  :   ASG_2_2
************************************************************************************************************** */

/*
   Write a program to check if a given number is an Armstrong Number.
            solution :  https://www.youtube.com/watch?v=2qcUcon5Ux0

                        1- how many digits are there in your number?
                        2- multiply each digit n times and add them
                        3- check whether the calculated result is equal to the actual number or not
*/

#include <stdio.h>




int main ()
{
    int x,count,number_of_digits,reminder,mul = 1,result = 0;  /* we must not define y here*/


    /* step-1 */

    printf("please enter number: ");
    scanf("%i",&x);
    int y = x;                                                  /* we must define y here not aboove*/
    while (y != 0)
    {
        y = y/10;
        count++;
    }


    /* step-2 */

    number_of_digits = count;
    y = x;
    while(y != 0)
    {
        reminder = y%10;
        while(number_of_digits != 0)
        {
            mul = mul*reminder;
            number_of_digits--;
        }
        result = result + mul;
        number_of_digits = count;
        mul=1;
        y = y / 10;

    }


    /* step-3 */

    if(result == x)

        printf("this number %i ----->  is an  Armstrong number",x);

    else

        printf("this number %i ----->  is not an Armstrong number",x);


    return 0;
}

