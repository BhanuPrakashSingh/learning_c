#include<stdio.h>
int main()
{
    int Y;
    printf("Enter any year:\n");
    scanf("%d",&Y);
    (Y%4) == 0 ? printf("%d is leap year.\n",Y) : printf("%d is not a leap year.\n",Y);
}