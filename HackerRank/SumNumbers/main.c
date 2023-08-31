#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int X,Y;
    float Z,W;
    scanf("%d %d %f %f",&X ,&Y, &Z, &W);
    printf("%d %d \n%0.1f %0.1f",X+Y,X-Y,Z+W,Z-W);
    return 0;
}
