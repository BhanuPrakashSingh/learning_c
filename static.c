#include<stdio.h>
int static1();
static int a=1;
int main(void)
{
	static int a;
	printf("%d ",a++);
	static1();
	{
	static int a;
		printf("%d ",a++);
	}
	printf("%d ",a++);
	static1();
	return 0;
}
int static1()
{
      static int a;
	printf("1 %d ",a++);
	return 0;

}
