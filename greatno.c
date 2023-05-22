#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter any three number:\n");
    scanf("%d%d%d",&a,&b,&c);
    a>b ? (a>c ? printf("%d is bigger.\n",a) : printf("%d is bigger.\n",c)) : (b>c ? printf("%d is bigger.\n",b) : printf("%d is beigger.\n",c)); 
}