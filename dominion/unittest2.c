#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

	//int main()
int main (int argc, char** argv)	{
	struct gameState G;
	printf("\n******Start Testing Buy Card******\n");
	
	G.numBuys = 2;
	G.coins = 2;
	printf("Testing too few coins\n");
 	int test = buyCard(2, &G);
		if(test == -1)
			printf("\nPassed\n");
		else
			printf("\nFailed\n");
	printf("Test a flawless purchase\n");
	G.coins = 10;
	test = buyCard(2, &G);
		if(test == 0)
			printf("\nPassed\n");
		else
			printf("\nFailed\n");
 	printf("Test exact amount\n");
 	test = buyCard(2, &G);
		if(test == 0)
			printf("\nPassed\n");
		else
			printf("\nFailed\n");
 	printf("Testing to see if the user does not have any buys left\n");
 	G.coins = 6;
	test = buyCard(2, &G);
		if(test == -1)
			printf("\nPassed\n");
		else
			printf("\nFailed\n");
		
 	printf("\n******End Testing Buy Card******\n"); 
	
 	return 0;	
}