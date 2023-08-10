#include <stdio.h>
#include <stdlib.h>


int number;

int main()
{
    int i;
    printf("please enter number : \n");
    scanf("%d",&number);
    for ( i = 0 ; i <= number ; i++ )
    {
        printf ("%d \n",i);
    }

    return 0;
}
