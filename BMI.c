#include<stdio.h>
int main()
{
    float k, m, BIM;
    printf("Enter your weight(in kg) and hight(in meter):\n");
    scanf("%f%f",&k,&m);
    BIM = (k/(m*m));
    if (BIM >= 40.0)
        printf("Morbidly Obese\n");
    else if (BIM <= 30.9 && BIM >= 30.0)
        printf("Obese\n");
    else if (BIM <= 25.9 && BIM >= 25.0)
        printf("Overweight\n");
    else if (BIM <= 24.9 && 18.6)
        printf("Ideal\n");
    else if (BIM <= 18.5 && BIM >= 17.6)
        printf("Underweight\n");
    else if (BIM <=17.5 && BIM >= 15.1)
        printf("Anorexic\n");
    else
        printf("Starvation\n");
    return 0;
}