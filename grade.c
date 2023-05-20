#include<stdio.h>
int main()
{
    int Hardness, Tensile;
    float Carbon;
    printf("Enter the values of Hardness, Tensile, Carbon:\n");
    scanf("%d%d%f",&Hardness,&Tensile,&Carbon);
    if(Hardness>50)
    {
        if(Carbon<0.7)
        {
            if(Tensile>5600)
                printf("Grade is 10.\n");
            else
                printf("Grade is 9.\n");
        }
        else 
        {
            if(Tensile>5600)
                printf("Grade is 7.\n");
            else
                printf("Grade is 6.\n");
        }
    }
    else
    {
        if(Carbon<0.7)
        {
            if(Tensile>5600)
                printf("Grade is 8.\n");
            else
                printf("Grade is 6.\n");
        }
        else
        {
            if(Tensile>5600)
                printf("Grade is 6.\n");
            else
                printf("Grade is 5.\n");
        }
    }
    return 0;
}   

