#include<stdio.h>
int true=1,false=0;
int N=100000;
int ar[100001];
void create()
{
	int i;
	for(i=1;i<=N;i++)
	{
		ar[i]=true;
	}
	for(i=2;i*i<=N;i++)
	{
		if(ar[i]==true)
		{
			for(int j=i*i;j<=N;j=j+i)
			{
				ar[j]=false;
			}
		}
	}
}

int main()
{
	create();
	int n;
	printf("Enter number");
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
	{
		if(ar[i]==true)
		printf("%d ",i);
	}
	
	return 0;	
}