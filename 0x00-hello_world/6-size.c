#include <stdio.h>
/**
*main - printing sizes
*Return:Always0(succes)
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

printf("size of a char: %li byte (s)\n", sizeof(a));
printf("size of an int: %li byte (s)\n", sizeof(b));
printf("size of a long int: %li byte (s)\n", sizeof(c));
printf("size of a long long int: %li byte (s)\n", sizeof(d));
printf("size of a float: %li byte (s)\n", sizeof(e));
return (0);
}
