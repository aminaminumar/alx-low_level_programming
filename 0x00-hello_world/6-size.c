#include <stdio.h>
/**
 * main . Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
char c;
int i;
long int longi;
long long int lx2_i;
float f;
printf("size of a char: %lu byte(s) \n", (unsigned long)sizeof(c));
printf("size of an int: %lu byte(s) \n", (unsigned long)sizeof(i));
printf("size of a long int: %lu byte(s) \n", (unsigned long)sizeof(longi));
printf("size of a long long int: %lu byte(s) \n", (unsigned long)sizeof(lx2_i));
printf("size of a float: %lu byte(s) \n", (unsigned long)sizeof(f));
return(0);
}
