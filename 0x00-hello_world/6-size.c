#include <stdio.h>
/**
 * main - print the string in the put function
 *
 * Description: using the main function
 * this program prints the size of various types on the computer it is compiled and run on
 * return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of a char: %zu byte(s)\n", sizeof(c));
	printf("size of an int: %zu byte(s)\n", sizeof(i));
	printf("size of a long int: %zu byte(s)\n", sizeof(li));
	printf("size of a long long int: %zu byte(s)\n", sizeof(lli));
	printf("size of a float: %zu byte(s)\n", sizeof(f));
	return (0);
}
