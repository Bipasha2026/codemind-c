#include<stdio.h>
int main()
{
    int n,k,x,y;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    int fix,rc,bc;
    fix=k*x;
    bc=(n-k)*y;
    rc=(n-k)*x;
    if(bc>rc)
    {
      printf("%d",fix+rc);  
    }
    else
    {
      printf("%d",fix+bc); 
    }
}
