#include<stdio.h>
#include<math.h>
int main()
{
    int x, y,cx, cy r, d;
    printf("Enter points (cx, cy) of center of a circle:\n");
    scanf("%d%d",&cx,&cy);
    printf("Enter points (x, y) to check the points:\n");
    scanf("%d%d",&x,&y);
    printf("Enter redius of a circle: \n");
    scanf("%d",&r);
    d = sqrt(pow((x - cx), 2) + pow((y - cy), 2));
    if(d < r)
        printf("Points (%d, %d) is inside the circle\n",x,y);
    else if(d > r)
        printf("Points (%d, %d) is outside the circle\n",x,y);
    else    
        printf("Points (%d, %d) is on the circle\n",x,y);
    return 0;
}
