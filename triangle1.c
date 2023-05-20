#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter te sides (a, b, c) of triangle :\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a==b && b==c)
        printf("Triangle is an equilateral.\n");
    else if (a==b || b==c || c==a)
        printf("Triangle is an isosceles.\n");
    else if (((a*a)+(b*b)==(c*c)) || ((a*a)+(c*c)==(b*b)) || ((b*b)+(c*c)==(a*a)))
        printf("Triangle is a right-triangle.\n");
    else
        printf("Triangle is a scalene.\n");
    return 0;
}