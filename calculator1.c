#include<stdio.h>
int main()
{
    int a,b,ch;
    printf("enter the value of a and b:");
    scanf("%d\n%d\n",&a,&b);
    printf("enter the oprater:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("addition:%d",a+b);
        break;
    case 2:
        printf("substraction:%d",a-b);
        break;
    case 3:
        printf("multiplay:%d",a*b);
        break;
    case 4:
        printf("devided:%d",a/b);
        break;
    case 5:
        printf("remender:%d",a%b);
        break;
    default:
    printf("invalid number");
        break;
    }
    return 0;

}