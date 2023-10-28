#ifndef DECK_H
#define DECK_H

#include <stdlib.h>

/**
 * enum kind_e - the Enumeration of card suits.
 * @SPADE: the Spades suit.
 * @HEART: the Hearts suit.
 * @CLUB: the Clubs suit.
 * @DIAMOND: the Diamonds suit.
 */
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/**
 * struct card_s - Playing card
 *
 * @value: the Value of the card
 * From "Ace" to "King"
 * @kind: the Kind of the card
 */
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

/**
 * struct deck_node_s - Deck of card
 *
 * @card: the Pointer to the card of the node
 * @prev: the Pointer to the previous node of the list
 * @next: the Pointer to the next node of the list
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);

#endif /* DECK_H */
