#include <stdio.h>
#include <string.h>
void main(void)
{
	char arr1[200],arr2[200];
	printf("Please enter first string : ");
	gets(arr1);
	printf("Please enter second string : ");
	gets(arr2);
	
	if(strcmp(arr1,arr2) == 0)
		printf("Both strings are same");
	else
		printf("Both strings are different");
}
