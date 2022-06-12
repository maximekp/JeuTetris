#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "1-Grid.h"
#include "2-Pieces.h"


int main () {

	char grid[SIZE][SIZE] ;
	createGrid (grid, SIZE) ;
	
	int alea ;
	srand(time(NULL)) ;
	alea = rand()%7 + 1 ;
	if (alea == 1) {
		createPieceO () ;
	}
	else if (alea == 2) {
		createPieceI () ;
	}
	else if (alea == 3) {
		createPieceT () ;
	}
	else if (alea == 4) {
		createPieceS () ;
	}
	else if (alea == 5) {
		createPieceZ () ;
	}
	else if (alea == 6) {
		createPieceL () ;
	}
	else if (alea == 7) {
		createPieceJ () ;
	}
	printf ("\nHope you enjoyed :)\n\n") ;
	printf ("Programmed by Aude Souchon and Maxime Kevers-Pascalis\n\n\n") ;
	return 0 ;
}
