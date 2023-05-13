#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter points(x, y) : \n");
    scanf("%d%d",&x,&y);
    (x == 0) ? ((y!=0) ? printf("(%d,%d)on y-axis\n") : printf("(%d,%d)on origin\n")) : ((y==0) ? printf("(%d,%d)on x-axis\n") : printf("(%d,%d)nighter on x&y-axis\n"));
    return 0;
}
