#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char** argv)	{
	struct gameState state;
	int a;
	
	printf ("\n******Start Card Test: Embargo*****\n");

	a = cardEffect(embargo, 0, 0, 0, &state, 1, 0);
	assert(a == 0);
	assert(state.coins == 2);
	printf ("\nPassed\n");

	printf ("\n******Start Card Test: Embargo******\n");

	return 0;
}