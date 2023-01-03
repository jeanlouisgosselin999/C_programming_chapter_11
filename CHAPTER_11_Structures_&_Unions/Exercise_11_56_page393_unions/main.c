/*
This program simply demonstrates how one union declared OUTSIDE main() and one union declared INSIDE main(), 
whose members are assigned values in turn, can only display one value at a time, despite where the unions ahev been declared.
*/


#include <stdio.h>
#include <stdlib.h>

	union {
		int a;
		float b;
		double c;
	} great;


int main(int argc, char *argv[]) {
	
//******************************** CASE 1: when union is declared outside main() **************************************************
	
	printf("byte size of union great = %d\n\n", sizeof great);
	
	great.a = 100;
	
	printf("when only great.a has been assigned a value (100):\n");
	printf("great.a = %d\ngreat.b = %f\ngreat.c = %g\n\n", great.a, great.b, great.c);
	
	great.b = 0.5;
	
	printf("when only great.b has been assigned a value (0.5):\n");
	printf("great.a = %d\ngreat.b = %f\ngreat.c = %g\n\n", great.a, great.b, great.c);
	
	great.c = 1.0166667;
	
	printf("when only great.c has been assigned a value (1.0166667):\n");
	printf("great.a = %d\ngreat.b = %f\ngreat.c = %g\n\n", great.a, great.b, great.c);

//******************************** CASE 2: when union is declared inside main() **************************************************
	
	union {
		int i;
		float f;
		double d;
	} u;
	
	printf("byte size of union u = %d\n\n", sizeof u);
	
	u.i = 100;
	
	printf("when only u.i has been assigned a value (100):\n");
	printf("u.i = %d\nu.f = %f\nu.d = %g\n\n", u.i, u.f, u.d);
	
	u.f = 0.5;
	
	printf("when only u.f has been assigned a value (0.5):\n");
	printf("u.i = %d\nu.f = %f\nu.d = %g\n\n", u.i, u.f, u.d);
	
	u.d = 1.0166667;
	
	printf("when only u.d has been assigned a value (1.0166667):\n");
	printf("u.i = %d\nu.f = %f\nu.d = %g\n\n", u.i, u.f, u.d);
	
	return 0;
}
