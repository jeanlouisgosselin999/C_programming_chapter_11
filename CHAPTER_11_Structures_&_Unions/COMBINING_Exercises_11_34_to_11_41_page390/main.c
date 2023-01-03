/*
Declaring a structure of tag name "complex" with 2 floating-point members "real" and "imaginary".
Adding various variables and initializing these variables.
*/

#include <stdio.h>
#include <stdlib.h>

	struct complex {
		float real;
		float imaginary;
	}x, *px, cx[100];

int main(int argc, char *argv[]) {
	
	x.real = 1.3;
	x.imaginary = -2.2;
	
	printf("x.real = %f", x.real);
	printf("\nx.imaginary = %f", x.imaginary);

	cx[17].real = 22.5;
	cx[18].imaginary = 226.98;
	
	printf("\n\ncx[17].real = %f", cx[17].real);
	printf("\ncx[18].imaginary = %f", cx[18].imaginary);
	
	
	return 0;
}
