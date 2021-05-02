/* to convert lower case into upper case we use strpr().
 strupr() function is a non standard function.
  So, all compilers may not support.*/
  #include<stdio.h>
  #include<string.h>
void main(void)
{
    char mystring[] = {0};
    printf("Enter your string: ");
    scanf("%s",&mystring);
    printf("%s\r\n",strupr(mystring));
    printf("%s\r\n",strlwr(mystring));
}