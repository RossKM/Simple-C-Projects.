#include<stdio.h>

int power(int m, int n);

// Test the power function.

int main()
{
	int i;

	printf("Squared values of each number.\n%-5d %-5d %-5d %-5d\n\n", 1, 2, 3, 4);
	for (i = 0; i < 10; ++i)
		printf("%-5d %-5d %-5d %-5d\n",  i, power(2, i), power(3,i), power(4, i));
	return 0;
}

// power: raise base to n-th power; n >= 0 

int power(int base, int n) //Takes the values in brackets above, where 2 is the base and i is n.
{
	int i, p;

	p = 1;
	for (i = 1; i <= n; ++i)
		p = p * base; //Does the multiplication.
	return p; // Returns the power.
}

