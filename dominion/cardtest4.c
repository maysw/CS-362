#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char** argv) {
	struct gameState G; 
	int theGardens;
	
	printf("\n******Start Card Test: Gardens******\n");
	
	G.hand[0][0] = gardens;
	G.phase = 0;
	G.numActions = 1;
	theGardens = playCard(0,-1,-1,-1,&G);
	assert(G.numActions == 1);
	assert(theGardens == -1);
	printf("\nPassed\n");
	
	printf ("\n******End Card Test: Gardens******\n");
	
	return 0;
}