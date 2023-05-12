#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter points(x, y) : \n");
    scanf("%d%d",&x,&y);
    if(x == 0 && y != 0)
        printf("Points (%d, %d) lies on y-axis\n",x,y);
    else if(x != 0 && y == 0)
        printf("Points (%d, %d) lies on x-axis\n",x,y);
    else if(x == 0 && y == 0)
        printf("Points (%d, %d) lies on the origin\n",x,y);
    else 
        printf("Points (%d, %d) neither lies on x-aixs or y-aixs\n",x,y);
    return 0;
}