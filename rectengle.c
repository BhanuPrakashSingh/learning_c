#include<stdio.h>
int main()
{
    int l, w, area, perimeter;
    printf("Enter the length and breadth : \n");
    scanf("%d%d",&l,&w);
    area = l * w;
    perimeter = 2 * (l + w);
    if(area > perimeter)
        printf("Area of a rectengle is greater.\n");
    else 
        printf("Perimeter of a rectengle is a greater.\n");
    return 0;

}