/*What is leap year?

Leap year is a year which has 366 days. Leap year occurs once every 4 years.

How to find whether a year is leap year or not using a C program?

* A year which can be exactly divisable by 4 except century years is called leap year.


* Century year means the year which ends with 00. 
Century year also can be a leap year if it is exactly divisable by 400.*/
#include<stdio.h>
void main (void)
{
    int Year;
    printf("Enter the Year: ");
    scanf("%d",&Year);
    
    if(Year%4 == 0)
        printf("Mentioned year is a leap year");
    else if(Year%400 == 0)
        printf("Mentioned year is a leap year");
    else
        printf("Mentioned year is not a leap year");

}