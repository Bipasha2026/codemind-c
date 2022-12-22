#include<stdio.h>
int main()
{
    int n,d,sum=0;
    scanf("%d",&n);
    int square=n*n;
    while(square!=0)
    {
        d=square%10;
        sum= sum+d;
        square=square/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}