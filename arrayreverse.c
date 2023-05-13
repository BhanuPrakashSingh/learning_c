#include<stdio.h>
void rev(int *ar,int f,int l)
{
	int temp=0;
	while(f<l)
	{
 		temp=ar[f];
 		ar[f]=ar[l];
 		ar[l]=temp;
 		f++;
 		l--;
	}
}
void fxn(int *ar,int n,int k)
{
	rev(ar,0,n-1);
	rev(ar,0,k-1);
	rev(ar,k,n-1);
}
int main()
{
	int n,i,k;
	scanf("%d %d",&n,&k);
	int ar[n];
	for(i=0;i<=n;i++)
	{
		scanf("%d",&ar[i]);
	}
	k=k%n;
	fxn(ar,n,k%n);
	for(i=0;i<=n;i++)
	{
		printf("%d\t",ar[i]);
	}
	return 0;
}