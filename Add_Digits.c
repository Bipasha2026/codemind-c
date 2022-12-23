#include<stdio.h>
int main()
{
    int n,r,s=0;
    scanf("%d",&n);
    while(n>9)
    {
        r=n%10;//38%10=8
        n=n/10;//38/10=3
        n=n+r;
    }
    printf("%d",n);
}
