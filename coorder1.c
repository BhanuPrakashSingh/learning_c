#include<stdio.h>
#include<math.h>
int main()
{
    int x, y, r, d;
    printf("Enter coordinates (x, y) of center of a circle:\n");
    scanf("%d%d",&x,&y);
    printf("Enter redius of a circle: \n");
    scanf("%d",&r);
    d = sqrt(pow(x, 2) + pow(y, 2));
    if(d < r)
        printf("Points (%d, %d) is inside the circle\n",x,y);
    else if(d > r)
        printf("Points (%d, %d) is outside the circle\n",x,y);
    else    
        printf("Points (%d, %d) is on the circle\n",x,y);
    return 0;
}