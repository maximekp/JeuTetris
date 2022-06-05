#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "2-Pieces.h"

//The objective of this file is to create and display all the game pieces.
//The pieces are chosen randomly.
//This program also allows the user to chose the orientation of the piece.

void createPieceO () {

	char pieceO1[4][4] = {
		{' ',' ',' ',' '},
		{' ','#','#',' '},
		{' ','#','#',' '},
		{' ',' ',' ',' '}
	} ;
	char pieceO2[4][4] = {
		{' ',' ',' ',' '},
		{' ','#','#',' '},
		{' ','#','#',' '},
		{' ',' ',' ',' '}
	} ;
	char pieceO3[4][4] = {
		{' ',' ',' ',' '},
		{' ','#','#',' '},
		{' ','#','#',' '},
		{' ',' ',' ',' '}
	} ;
	char pieceO4[4][4] = {
		{' ',' ',' ',' '},
		{' ','#','#',' '},
		{' ','#','#',' '},
		{' ',' ',' ',' '}
	} ;
	
	int orientation ;
	int i ;
	int j ;
	
	printf ("The piece is : \n") ;
	for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceO1[i][j]) ;
			}	
			printf ("\n") ;
		}
		printf ("\n") ;
		
	
	printf ("Choose piece orientation \n") ;
	
	printf ("1 :\n") ;
	for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceO1[i][j]) ;
			}	
			printf ("\n") ;
		}
		printf ("\n") ;
	printf ("2 :\n") ;
	for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceO2[i][j]) ;
			}	
			printf ("\n") ;
		}
		printf ("\n") ;
	printf ("3 :\n") ;
	for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceO3[i][j]) ;
			}	
			printf ("\n") ;
		}
		printf ("\n") ;
	printf ("4 :\n") ;
	for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceO4[i][j]) ;
			}	
			printf ("\n") ;
		}
		printf ("\n") ;
		
	scanf ("%d", &orientation) ;
	printf ("\n") ;
	
	if (orientation == 1) {
		for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceO1[i][j]) ;
			}	
		printf ("\n") ;
		}
	}
	
	else if (orientation == 2) {
		for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceO2[i][j]) ;
			}
		printf ("\n") ;
		}
	}
	
	else if (orientation == 3) {
		for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceO3[i][j]) ;
			}
		printf ("\n") ;
		}
	}

	else if (orientation == 4) {
		for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceO4[i][j]) ;
			}
		printf ("\n") ;
		}
	}
}

void createPieceI () {

	char pieceI1[4][4] = {
		{' ',' ',' ',' '},
		{'#','#','#','#'},
		{' ',' ',' ',' '},
		{' ',' ',' ',' '}
	} ;
	char pieceI2[4][4] = {
		{' ',' ','#',' '},
		{' ',' ','#',' '},
		{' ',' ','#',' '},
		{' ',' ','#',' '}
	} ;
	char pieceI3[4][4] = {
		{' ',' ',' ',' '},
		{'#','#','#','#'},
		{' ',' ',' ',' '},
		{' ',' ',' ',' '}
	} ;
	char pieceI4[4][4] = {
		{' ',' ','#',' '},
		{' ',' ','#',' '},
		{' ',' ','#',' '},
		{' ',' ','#',' '}
	} ;
	
	int orientation ;
	int i ;
	int j ;
	
	printf ("The piece is : \n") ;
	for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceI1[i][j]) ;
			}	
			printf ("\n") ;
		}
		printf ("\n") ;
	
	printf ("Choose piece orientation \n") ;
	
	printf ("1 :\n") ;
	for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceI1[i][j]) ;
			}	
			printf ("\n") ;
		}
		printf ("\n") ;
	printf ("2 :\n") ;
	for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceI2[i][j]) ;
			}	
			printf ("\n") ;
		}
		printf ("\n") ;
	printf ("3 :\n") ;
	for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceI3[i][j]) ;
			}	
			printf ("\n") ;
		}
		printf ("\n") ;
	printf ("4 :\n") ;
	for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceI4[i][j]) ;
			}	
			printf ("\n") ;
		}
		printf ("\n") ;
		
	scanf ("%d", &orientation) ;
	printf ("\n") ;
	
	if (orientation == 1) {
		for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceI1[i][j]) ;
			}	
		printf ("\n") ;
		}
	}
	
	else if (orientation == 2) {
		for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceI2[i][j]) ;
			}
		printf ("\n") ;
		}
	}
	
	else if (orientation == 3) {
		for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceI3[i][j]) ;
			}
		printf ("\n") ;
		}
	}

	else if (orientation == 4) {
		for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceI4[i][j]) ;
			}
		printf ("\n") ;
		}
	}
}

void createPieceT () {

	char pieceT1[4][4] = {
		{' ',' ',' ',' '},
		{' ','#','#','#'},
		{' ',' ','#',' '},
		{' ',' ',' ',' '}
	} ;
	char pieceT2[4][4] = {
		{' ',' ','#',' '},
		{' ',' ','#','#'},
		{' ',' ','#',' '},
		{' ',' ',' ',' '}
	} ;
	char pieceT3[4][4] = {
		{' ',' ','#',' '},
		{' ','#','#','#'},
		{' ',' ',' ',' '},
		{' ',' ',' ',' '}
	} ;
	char pieceT4[4][4] = {
		{' ',' ','#',' '},
		{' ','#','#',' '},
		{' ',' ','#',' '},
		{' ',' ',' ',' '}
	} ;
	
	int orientation ;
	int i ;
	int j ;
	
	printf ("Choose piece orientation \n") ;
	scanf ("%d", &orientation) ;
	printf ("\n") ;
	
	if (orientation == 1) {
		for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceT1[i][j]) ;
			}	
		printf ("\n") ;
		}
	}
	
	else if (orientation == 2) {
		for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceT2[i][j]) ;
			}
		printf ("\n") ;
		}
	}
	
	else if (orientation == 3) {
		for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceT3[i][j]) ;
			}
		printf ("\n") ;
		}
	}

	else if (orientation == 4) {
		for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceT4[i][j]) ;
			}
		printf ("\n") ;
		}
	}
}

void createPieceS () {

	char pieceS1[4][4] = {
		{' ',' ',' ',' '},
		{' ',' ','#','#'},
		{' ','#','#',' '},
		{' ',' ',' ',' '}
	} ;
	char pieceS2[4][4] = {
		{' ',' ','#',' '},
		{' ',' ','#','#'},
		{' ',' ',' ','#'},
		{' ',' ',' ',' '}
	} ;
	char pieceS3[4][4] = {
		{' ',' ',' ',' '},
		{' ',' ','#','#'},
		{' ','#','#',' '},
		{' ',' ',' ',' '}
	} ;
	char pieceS4[4][4] = {
		{' ',' ','#',' '},
		{' ',' ','#','#'},
		{' ',' ',' ','#'},
		{' ',' ',' ',' '}
	} ;
	
	int orientation ;
	int i ;
	int j ;
	
	printf ("Choose piece orientation \n") ;
	scanf ("%d", &orientation) ;
	printf ("\n") ;
	
	if (orientation == 1) {
		for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceS1[i][j]) ;
			}	
		printf ("\n") ;
		}
	}
	
	else if (orientation == 2) {
		for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceS2[i][j]) ;
			}
		printf ("\n") ;
		}
	}
	
	else if (orientation == 3) {
		for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceS3[i][j]) ;
			}
		printf ("\n") ;
		}
	}

	else if (orientation == 4) {
		for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceS4[i][j]) ;
			}
		printf ("\n") ;
		}
	}
}

void createPieceZ () {

	char pieceZ1[4][4] = {
		{' ',' ',' ',' '},
		{' ','#','#',' '},
		{' ',' ','#','#'},
		{' ',' ',' ',' '}
	} ;
	char pieceZ2[4][4] = {
		{' ',' ',' ','#'},
		{' ',' ','#','#'},
		{' ',' ','#',' '},
		{' ',' ',' ',' '}
	} ;
	char pieceZ3[4][4] = {
		{' ',' ',' ',' '},
		{' ','#','#',' '},
		{' ',' ','#','#'},
		{' ',' ',' ',' '}
	} ;
	char pieceZ4[4][4] = {
		{' ',' ',' ','#'},
		{' ',' ','#','#'},
		{' ',' ','#',' '},
		{' ',' ',' ',' '}
	} ;
	
	int orientation ;
	int i ;
	int j ;
	
	printf ("Choose piece orientation \n") ;
	scanf ("%d", &orientation) ;
	printf ("\n") ;
	
	if (orientation == 1) {
		for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceZ1[i][j]) ;
			}	
		printf ("\n") ;
		}
	}
	
	else if (orientation == 2) {
		for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceZ2[i][j]) ;
			}
		printf ("\n") ;
		}
	}
	
	else if (orientation == 3) {
		for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceZ3[i][j]) ;
			}
		printf ("\n") ;
		}
	}

	else if (orientation == 4) {
		for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceZ4[i][j]) ;
			}
		printf ("\n") ;
		}
	}
}

void createPieceL () {

	char pieceL1[4][4] = {
		{' ',' ',' ',' '},
		{' ','#','#','#'},
		{' ','#',' ',' '},
		{' ',' ',' ',' '}
	} ;
	char pieceL2[4][4] = {
		{' ',' ','#',' '},
		{' ',' ','#',' '},
		{' ',' ','#','#'},
		{' ',' ',' ',' '}
	} ;
	char pieceL3[4][4] = {
		{' ',' ',' ','#'},
		{' ','#','#','#'},
		{' ',' ',' ',' '},
		{' ',' ',' ',' '}
	} ;
	char pieceL4[4][4] = {
		{' ','#','#',' '},
		{' ',' ','#',' '},
		{' ',' ','#',' '},
		{' ',' ',' ',' '}
	} ;
	
	int orientation ;
	int i ;
	int j ;
	
	printf ("Choose piece orientation \n") ;
	scanf ("%d", &orientation) ;
	printf ("\n") ;
	
	if (orientation == 1) {
		for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceL1[i][j]) ;
			}	
		printf ("\n") ;
		}
	}
	
	else if (orientation == 2) {
		for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceL2[i][j]) ;
			}
		printf ("\n") ;
		}
	}
	
	else if (orientation == 3) {
		for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceL3[i][j]) ;
			}
		printf ("\n") ;
		}
	}

	else if (orientation == 4) {
		for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceL4[i][j]) ;
			}
		printf ("\n") ;
		}
	}
}

void createPieceJ () {

	char pieceJ1[4][4] = {
		{' ',' ',' ',' '},
		{' ','#','#','#'},
		{' ',' ',' ','#'},
		{' ',' ',' ',' '}
	} ;
	char pieceJ2[4][4] = {
		{' ',' ','#','#'},
		{' ',' ','#',' '},
		{' ',' ','#',' '},
		{' ',' ',' ',' '}
	} ;
	char pieceJ3[4][4] = {
		{' ','#',' ',' '},
		{' ','#','#','#'},
		{' ',' ',' ',' '},
		{' ',' ',' ',' '}
	} ;
	char pieceJ4[4][4] = {
		{' ',' ','#',' '},
		{' ',' ','#',' '},
		{' ','#','#',' '},
		{' ',' ',' ',' '}
	} ;
	
	int orientation ;
	int i ;
	int j ;
	
	printf ("Choose piece orientation \n") ;
	scanf ("%d", &orientation) ;
	printf ("\n") ;
	
	if (orientation == 1) {
		for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceJ1[i][j]) ;
			}	
		printf ("\n") ;
		}
	}
	
	else if (orientation == 2) {
		for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceJ2[i][j]) ;
			}
		printf ("\n") ;
		}
	}
	
	else if (orientation == 3) {
		for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceJ3[i][j]) ;
			}
		printf ("\n") ;
		}
	}

	else if (orientation == 4) {
		for (i = 0 ; i < 4 ; i ++) {
			for (j = 0 ; j < 4 ; j ++) {
				printf ("%c", pieceJ4[i][j]) ;
			}
		printf ("\n") ;
		}
	}
}
