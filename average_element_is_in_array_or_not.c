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
    for(i=0;i<n;i++)
    {
        sum=sum+x[i];
    }
    int av=sum/n;
    int e;
    for(i=0;i<n;i++)
    {
        if(av==x[i])
        {
            e=1;
            break;
        }
    }
    if(e==1) printf("True");
    else printf("False");
}