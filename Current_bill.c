#include<stdio.h>
int main()
{
    int unit;
    float charge,amt;
    scanf("%d",&unit);
    if(unit<=199)
    {
        charge=unit*1.20;
    }
    else if(unit>200 && unit<=400)
    {
        charge=unit*1.50;
    }
    else if(unit>400 && unit<=600)
    {
        charge=unit*1.80;
    }
    else
    {
        charge=unit*2.00;
    }
    if(charge<400)
    {
        amt=charge+100;
    }
    else
    {
        amt=0.15*charge+charge;
    }
    printf("%0.2f",amt);
}