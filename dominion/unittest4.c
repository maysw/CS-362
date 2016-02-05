#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
	//int main(int argc, char *argv[])
int main (int argc, char** argv)	{
    struct gameState G;
    int a;
	int k[10] = {adventurer, gardens, minion, village, embargo, mine, cutpurse, baron, tribute, smithy};
	
	printf ("\n******Start Testing Whose Turn******\n");
	
	printf("\nThis test shall pass 3 times\n");
	
    for (int x = 2 ; x < 5 ; ++x)	{
        a = initializeGame(2, k, 5, &G);
        a = whoseTurn(&G);
        assert(a == G.whoseTurn);
		printf("\nPassed\n");		
	}

	printf("\n******End Testing Whose Turn******\n");

	return 0;
}