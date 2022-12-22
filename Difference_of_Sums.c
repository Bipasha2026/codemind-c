#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0,set=0,z;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;
    }
    for(i=1;i<=n;i++)
    {
        set=set+i;
        z=set*set;
    }
    if(sum>z)
    {
        printf("%d",sum-z);
    }
    else
    {
        printf("%d",z-sum);
    }
}