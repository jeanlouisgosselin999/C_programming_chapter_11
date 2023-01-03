#include <stdio.h>
#include <stdlib.h>

//declaring both structures:

typedef struct {
	int won;
	int lost;
	float percentage;
} record;


typedef struct {
	char name[40];
	record stats; //==> NOTE: this member is of user-defined type "record"
} team;


int main(int argc, char *argv[]) {
	
	//(1) printing the byte size of the structure TEAM:
	printf("\n\nByte size of structure TEAM: %d", sizeof(team));
	
	
	//(2)declaring + initializing a variable "t" of user-defined type "team"
	team t = {"Chicago Bears", 14, 2, 87.5};
	//printing these values:
	printf("Initialized members of both structures:\n\nName: %s \nGames won: %d \nGames lost: %d \nPercentage of scores: %f", t.name, t.stats.won, t.stats.lost, t.stats.percentage);
	
	//(3) declaring a pointer of user-defined type "team" + printing the same values from tis structure this time through this pointer:
	team *pt;
	printf("Initialized members of both structures (this time: through POINTERS):");
	printf("\n\nName: %s \nGames won: %d \nGames lost: %d \nPercentage of scores: %f", pt->name, pt->stats.won, pt->stats.lost, pt->stats.percentage);
	
	team league[30];
	league[4].name = "John";
	
	
	return 0;
}
