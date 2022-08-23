#include<stdio.h>

//Counts characters in an input.

int main()
{
	double nc; //used to define variables holding numbers with decimal points.
	for (nc = 0; getchar() != EOF; ++nc) //nc is 0, the EOF is recieved when there is no more input, when nc does equal end of file, nc = nc + 1.
		;
	printf("Your string contains: %.0f characters.\n", --nc);
}
