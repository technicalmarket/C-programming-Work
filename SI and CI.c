/*   Simple Inrest and Compound Interest
p = Principal Amount,R = rate of Interest,T = Time in Years
Simple Interst = (P*R*T)/100

Amount = P(1+R/100)^T
Coumpound Interest = Amount - P*/



#include<stdio.h>
void main (void)
{
    int PrincipalAmount,Time,SI,CI,Amount;
    float RateOfInterest;
    printf("Enter the Principal Amount: ");
    scanf("%d",&PrincipalAmount);
    
    printf("Enter the Rate Of Interest: ");
    scanf("%f",&RateOfInterest);

    printf("Enter the Time In Years: ");
    scanf("%d",&Time);

    SI = (PrincipalAmount*RateOfInterest*Time)/100;
    Amount = PrincipalAmount * pow((1+RateOfInterest/100),Time);
    //printf("Amount: %d",Amount);
    CI = Amount - PrincipalAmount;

    printf("Your Simple Iterest will be: %d\r\n",SI);
    printf("Your Compound Iterest will be: %d\r\n",CI);

}