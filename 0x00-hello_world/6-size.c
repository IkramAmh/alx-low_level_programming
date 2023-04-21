#include <stdio.h>

int main(int c, int i, int li, int lli, int f)
{
	c=sizeof(char);
	i=sizeof(int);
	li=sizeof(long int);
	lli=sizeof(long long int);
	f=sizeof(float);

	printf("Size of a char: "&c" byte(s)");
	printf("Size of an int: "&i" byte(s)");
	printf("Size of a long int: "&li" byte(s)");
	printf("Size of a long long int: "&lli" byte(s)");
	printf("Size of a float: "&f" byte(s)");
	return (0);
}
