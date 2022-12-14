#include<stdio.h>
int main()
{
    int basic,da,hra;
    float gs;
    scanf("%d",&basic);
    if(basic<=10000)
    {
        da=basic*0.8;
        hra=basic*0.2;
    }
    else if(basic<=20000)
    {
        da=basic*0.9;
        hra=basic*0.25;
    }
    else
    {
        da=basic*0.95;
        hra=basic*0.3;
    }
    gs=basic+da+hra;
    printf("%0.2f",gs);
}