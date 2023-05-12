#include<stdio.h>
int main()
{
    int abs = 23;
    printf("Enter a number : \n");
    scanf("%d",&abs);
    if(abs >= 0)
        printf("%d is a absolute number.\n",abs);
    else
        printf("%d is not a absolute number.\n",abs);
    return 0;
}