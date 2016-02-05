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
	G.coins = 0;
	
	printf("\n******Start Testing Update Coins******\n");
	
	printf("\nLets test copper first\n");
	G.hand[0][0] = copper;
	G.hand[0][1] = copper;
	G.hand[0][2] = copper;
	G.hand[0][3] = copper;
	G.hand[0][4] = copper;
	G.hand[0][5] = copper;
	G.hand[0][6] = copper;
	G.hand[0][7] = copper;
	G.hand[0][8] = copper;
	G.hand[0][9] = copper;
	updateCoins(0,&G, 0);
	printf("\nWe should have 10 copper coins: %d\n", G.coins);
	if(G.coins == 10)
		printf("\nPassed\n");
	else
		printf("\nFailed\n");
	
	printf("\nLets test Silver next\n");
	G.hand[0][0] = silver;
	G.hand[0][1] = silver;
	G.hand[0][2] = silver;
	G.hand[0][3] = silver;
	G.hand[0][4] = silver;
	G.hand[0][5] = silver;
	G.hand[0][6] = silver;
	G.hand[0][7] = silver;
	G.hand[0][8] = silver;
	G.hand[0][9] = silver;
	updateCoins(0,&G, 0);
	printf("\nWe should have 10 silver coins: %d\n", G.coins);
	if(G.coins == 20)
		printf("\nPassed\n");
	else
		printf("\nFailed\n");
	
	printf("\nLets throw a little gold into these tests\n");
	G.hand[0][0] = gold;
	G.hand[0][1] = gold;
	G.hand[0][2] = gold;
	G.hand[0][3] = gold;
	G.hand[0][4] = gold;
	G.hand[0][5] = gold;
	G.hand[0][6] = gold;
	G.hand[0][7] = gold;
	G.hand[0][8] = gold;
	G.hand[0][9] = gold;
	updateCoins(0,&G, 0);
	printf("\nWe should have 10 gold coins: %d\n", G.coins);
	if(G.coins == 30)
		printf("\nPassed\n");
	else
		printf("\nFailed\n");
	
	printf("\nCan we get no coins?\n");
	G.hand[0][0] = adventurer;
	G.hand[0][1] = adventurer;
	G.hand[0][2] = adventurer;
	G.hand[0][3] = adventurer;
	G.hand[0][4] = adventurer;
	G.hand[0][5] = adventurer;
	G.hand[0][6] = adventurer;
	G.hand[0][7] = adventurer;
	G.hand[0][8] = adventurer;
	G.hand[0][9] = adventurer;
	updateCoins(0,&G, 0);
	printf("\nWe should have no coins: %d\n", G.coins);
	if(G.coins == 0)
		printf("\nPassed");
	else
		printf("\nFailed");
	
	printf("\n******End Testing Update Coins******\n");

	return 0;
}