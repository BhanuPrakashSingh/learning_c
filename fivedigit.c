#include<stdio.h>
int main()
{
    int num, a, b, c, d, e , x;
    printf("Enter five digits number :\n");
    scanf("%d",&num);
    e = num % 10;
    d = (num/10)%10;
    c = (num/100)%10;
    b = (num/1000)%10;
    a = (num/10000);
    
    x = e*10000 + d*1000 + c*100 + b*10 + a;
    printf("Reverse no. of num: %d\n",x);

    if(x == num)
        printf("The reverse of the no. %d is same as actual no.",num);
    else
        printf("The reverse of the no. %d is not same as actual no.",num);
    return 0;
}