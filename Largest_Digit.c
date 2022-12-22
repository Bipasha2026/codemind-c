#include<stdio.h>
int main()
{
    int n,q,s=0,max,r;
    scanf("%d",&n);
    q=n;
    max=0;
    while(q!=0)
    {
        r=q%10;
        if(r>max)
        {
            max=r;
        }
        q=q/10;
    }
    printf("%d",max);
}