#include<stdio.h>
#include<math.h>
int main()
{
    float x , sum ;
    printf("Enter a value of an angle in degree:\n");
    scanf("%f",&x);
    x = x*((3.14)/180.0);
    sum = pow(cos(x),2) + pow(sin(x),2);
    sum == 1 ? printf("Their sum is one.\n") : printf("Their sum is not one.\n");
}