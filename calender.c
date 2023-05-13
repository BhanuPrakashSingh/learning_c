#include<stdio.h>
int main()
{
    int year, a, day = 0;
    printf("Enter the year: \n");
    scanf("%d",&year);
    for(a = 1; a < year; a++)
    {
        if(a%4 == 0)
            day += 366;
        else
            day += 365;
    }
    day %= 7;
    if(day == 1)
        printf("It'll be Monday on 01/01/%d\n",year);
    else if(day == 2)
        printf("It'll be Tuesday on 01/01/%d\n",year);
    else if(day == 3)
        printf("It'll be Wednesday on 01/01/%d\n",year);
    else if(day == 4)
        printf("It'll be Thursday on 01/01/%d\n",year);
    else if(day == 5)
        printf("It'll be Friday on 01/01/%d\n",year);
    else if(day == 6)
        printf("It'll be Saturday on 01/01/%d\n",year);
    else
        printf("It'll be Sunday on 01/01/%d\n",year);
    return 0;
}