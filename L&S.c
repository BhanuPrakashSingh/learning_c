#include<stdio.h>
int main()
{
    char ch, sym;
    printf("Enter any two character:\n");
    scanf("%c%c",&ch,&sym);
    ch >= 97 ? (ch <= 122 ? printf("Lowercase character.\n") : printf("Not lowercase character.\n")) : printf("Not Lowercase character.\n");
    ((sym>=0 && sym<48) || (sym>57 && sym<65) || (sym>90 && sym<97) || sym>122) ? printf("Special character.\n") : printf("Not Special character.\n");
    return 0;
}