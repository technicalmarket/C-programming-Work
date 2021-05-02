#include <stdio.h>

void main(void)

{

int a, b, num1, num2, temp, gcd, lcm;

printf("Please enter two numbers one by one\n");

scanf("%d", &num1);

scanf("%d", &num2);

 

a = num1;

b = num2;

 

while (b != 0)

{

temp = b;

b = a % b;

a = temp;
printf("%d, ",a);
}

 

gcd = a;

lcm = (num1*num2)/gcd;


 

printf("GCD:\nGreatest common divisor of the numbers %d and %d = %d\n", num1, num2, gcd);

printf("LCM:\nLeast common multiple of the numbers %d and %d = %d\n", num1, num2, lcm);

}
