#include<stdio.h>

#define IN 1 // inside a word.
#define OUT 0 // outside a word.
// These are constants.

// Counts lines, words, and characters input.

int main()
{
	int c, nl, nw, nc, state;
	
	state = OUT;
	nl = nw = nc = 0; // Defines all of these values as 0 on the same line.
	while ((c = getchar()) != EOF) { // Gets input, EOF is end of file meaning there is no more input.
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t') // '||' means one or both conditions true.
			state = OUT; // Declares outside of a word.
		else if (state == OUT) {
			state = IN;
			++nw; // New word has started,
		}
	}
	printf("There is %d line, %d words and %d characters in this string. \n", nl, nw, nc);

	return(0);
}
		
	
