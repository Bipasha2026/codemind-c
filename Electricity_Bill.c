#include<stdio.h>
int main()
{
    int UnitConsumed;
    float CostperUnit,bill;
    scanf("%d",&UnitConsumed);
        printf("Units Consumed: %d
",UnitConsumed);
    if(UnitConsumed>0 && UnitConsumed<199)
    {
    CostperUnit=1.20;
    printf("Cost per Unit: %0.2f
",CostperUnit);
            bill=CostperUnit*UnitConsumed;
        printf("Bill: %0.2f
",bill);
    }
    else if(UnitConsumed>=200 && UnitConsumed<400)
    {
    CostperUnit=1.40;
     printf("Cost per Unit: %0.2f
",CostperUnit);
            bill=CostperUnit*UnitConsumed;
        printf("Bill: %0.2f
",bill);
    }
   else if(UnitConsumed>=400 && UnitConsumed<600)
    {
    CostperUnit=1.60;
     printf("Cost per Unit: %0.2f
",CostperUnit);
            bill=CostperUnit*UnitConsumed;
        printf("Bill: %0.2f
",bill);
    }
   else if(UnitConsumed>600 && UnitConsumed<800)
    {
    CostperUnit=1.80;
     printf("Cost per Unit: %0.2f
",CostperUnit);
             bill=CostperUnit*UnitConsumed;
        printf("Bill: %0.2f
",bill);
    }
    else if(UnitConsumed>=800)
    {
        CostperUnit=2.00;
         printf("Cost per Unit: %0.2f
",CostperUnit);
         bill=CostperUnit*UnitConsumed;
        printf("Bill: %0.2f
",bill);
    }
   
   float surcharge;
   if(bill>400)
    {
        surcharge=0.15*bill;
        printf("Surcharge: %0.2f
",surcharge);
    }
    else {
        surcharge=0.00;
        printf("Surcharge: %0.2f
",surcharge);
    }
    printf("Total Amount: %0.2f",bill+surcharge);
}