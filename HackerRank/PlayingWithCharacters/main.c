#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char X;
    char Y[50];
    char Z[100];
    scanf("%c\n%s\n%[^\n]%*c",&X,&Y,&Z);
    printf("%c\n%s\n%s",X,Y,Z);

    /*
    scanf("%c\n",&X);
    scanf("%s\n",&Y)
    scanf("%[^\n]%*c",&Z)
    */
    return 0;
}
