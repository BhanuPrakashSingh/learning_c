#include<stdio.h>
int i=0;
void val();
int main()
{
	printf("1. %d\t",i);
	i++;
	val();
	printf("2 .%d\t",i);
	val();
	return 0;
}
void val()
{
	int i=100;
	printf("3. %d\t",i);
	i++;
}
