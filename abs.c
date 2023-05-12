#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number : \n");
    scanf("%d",&num);
    if(num <= 0)
        num *= -1;
        printf("%d is a absolute number.\n",num);
    else
        printf("%d is not a absolute number.\n",num);
    return 0;
}
