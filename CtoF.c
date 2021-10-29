#include<stdio.h>

/* A program that prints a table of Fahrenheit and Celsius with corrosponding values.*/



int main()
{
	float fahr, celsius; /* fahr and celsius are floats to improve accuracy.*/
	float lower, upper, step;
	char F = 'F';
	char C = 'C';

	lower = 0; /* The lower limit of the list / where the list of temperatures starts.*/
	upper = 300; /* The upper limit of the list / where the list ends. */
	step = 20; /* The number between values in the list of temps, ie, 20, 40, 60...*/

	fahr = lower;

	printf("%3.0c %6.1c\n", F, C);
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0); /* The formula for changing C into F is F - 32, x5, /9, x5, /9 is shortened.*/
		printf("%3.0f %6.1f\n", fahr, celsius); /* Prints the table, the numbers in %f are to add spacing to ensure it is  right justified. */
		fahr = fahr + step;
	}	
	return 0;

}

