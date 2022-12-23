#include<stdio.h>
int main()
{
    int n,c=0,oc=0,ec=0,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(r%2==0)
        {
            ec++;
        }
        else if(r%2!=0)
        {
            oc++;
        }
        n=n/10;
        c++;
    }
    if(c==ec){ printf("Even");}
    else if (c==oc){ printf("Odd");}
    else printf("Mixed");
    
}