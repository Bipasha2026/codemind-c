#include<stdio.h>
int rev(int x);
int sq(int y);
int main()
{
    int n,i,n1,n2,n3,n4;
    scanf("%d",&n);
    n1=sq(n);
    n2=rev(n);
    n3=sq(n2);
    n4=rev(n3);
    if(n1==n4) printf("True");
    else printf("False");
}
int rev(int x)
{
    int q,r,s=0;
    q=x;
    while(q!=0)
    {
        r=q%10;
        s=s*10+r;
        q=q/10;
    }
    return s;
}
int sq(int y)
{
    int square=y*y;
    return square;
}