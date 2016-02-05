#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

int main (int argc, char** argv)	{
	struct gameState G;
	
	printf ("\n******Start Card Test: Outpost******\n"); 
	
	assert(G.outpostPlayed == 0);
	cardEffect(outpost, 0, 0, 0, &G, 0, 0);
	assert(G.outpostPlayed == 1);
	printf("\nPassed\n");
	
	printf ("\n******End Card Test: Outpost******\n");
	
	return 0;
} 
