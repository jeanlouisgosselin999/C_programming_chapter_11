/*
This program will demonstrate how we transfer a structure to a function BY REFERENCE (ie: by address == pointer)
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char *a;
	char *b;
	char *c;
} colors;

//prototype:
void funct(colors *pt);

int main(int argc, char *argv[]) {
	
	//(1) assigning three string literals to all 3 CHAR pointers contained in struct "colors":
	static colors sample = {"red", "green", "blue"}; //==> NOTE: adding 'static' or not does not make the slightest difference
													// ALSO: even if we declared variable 'sample' OUTSIDE main(), above, it would still make no difference
	
	//(2) printing three colors: "red", "green", "blue"
	printf("%s %s %s\n", sample.a, sample.b, sample.c); //==> NOTE: members 'a', 'b' and 'c' are of structure type 'colors'; although pointers, these members are treated the same as any other sort of member
	
	//(3) printing three new colors: "cyan", "magenta", "yellow"
	funct(&sample);
	
	//(4) since we have transferred our structure-typed variable "sample" to our function BY REFERENCE, this will print the last 3 colors again: "cyan", "magenta", "yellow"
	printf("%s %s %s\n", sample.a, sample.b, sample.c);
	
	
	return 0;
}

void funct(colors *pt) { //==> NOTE: scope of these changes remains inside the function alone; changes to not affect variables from within main()
	
	//re-assigning three string literals to all 3 CHAR pointers contained in struct "colors" (this time: using pointers = WHICH POINT TO THE POINTER MEMBERS OF STRUCT!!):
	pt -> a = "cyan";
	pt -> b = "magenta";
	pt -> c = "yellow";
	
	//printing:
	printf("%s %s %s\n", pt->a, pt->b, pt->c);
	
	return;
}
