#include<stdio.h>
int main()
{
    float sal;
    printf("Enter the salary:\n");
    scanf("%f",&sal);
    sal >= 25000 ? (sal <= 40000 ? printf("Manager\n") : printf("Accountant\n")) : (sal >= 15000 ? printf("Accountant\n") : printf("Clerk\n"));
}