#include<stdio.h>
#include<math.h>
int main()
{
        int a,b,i;
    printf("Enter range to print ARMSTRONG number.\n");
        scanf("%d %d",&a,&b);
        for(i=a;i<=b;i++)
        {
                int count=0,temp;
                temp=i;
                while(temp>0)
                {
                   temp/=10;
                   count++;
                }
                int sum=0,rem;
                temp=i;
                while(temp>0)
                {
                    rem=temp%10;
                    sum=sum+(pow(rem,count));
                    temp/=10;
                }
                if(sum==i)
                       printf("%d ",i);
 	}
       return 0;
}
