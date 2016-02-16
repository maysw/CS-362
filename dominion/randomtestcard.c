#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

#define MAX_TESTS 10000

int main() {

	int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse, sea_hag, tribute, smithy};
	int i, r, players, player, seed, errors = 0;
	struct gameState state;
	struct gameState temp; 
	srand(time(NULL));
	printf("******Begin Random Card Test Village*****\n");
	for (i = 0; i < MAX_TESTS; i++) {
		do {
			players = rand() % 4;
		} while (players < 2);

		seed = rand();		//pick random seed
		initializeGame(players, k, seed, &state);	//initialize Gamestate

		do {
			player = rand() % players; 
		} while (player == 0);	

		//Initiate valid state variables
		state.whoseTurn = player;
		state.deckCount[player] = rand() % MAX_DECK; //Pick random deck size out of MAX DECK size
		state.discardCount[player] = rand() % MAX_DECK;
		state.handCount[player] = rand() % MAX_HAND;
		state.hand[player][0] = village;
		state.numActions = rand() % 10; 
		memcpy(&temp, &state, sizeof(struct gameState));
		r = cardEffect(village, 0, 0, 0, &state, 0, 0);		//Run village card
		assert (r == 0);
		if (state.deckCount[player] != (temp.deckCount[player] - 1)) { errors++; }
		if (state.numActions != (temp.numActions + 2)) { errors++; }		//+2 Actions for Village

	}	
	printf("Errors: %d\n", errors);
	printf("******Finish Random Card Test Village*****\n");
	return 0;
}
