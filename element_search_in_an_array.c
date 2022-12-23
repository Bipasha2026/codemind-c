#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int m,e;
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(m==x[i]) e=1;
    }
    if(e==1) printf("True");
    else printf("False");
}