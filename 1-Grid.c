#include <stdio.h>
#include <stdlib.h>

#include "1-Grid.h"


//This function was created in order to create a blank grid of ten by ten. It is our play frid. Each column has its own letter, printed just above them.

void createGrid (char grid[][10], int size) {
	printf ("\n  A  B  C  D  E  F  G  H  I  J \n") ;
	for (int i = 0 ; i < SIZE ; i ++) {
		for (int j = 0 ; j < SIZE + 1 ; j ++) {
			grid[i][j] = ' ' ;
			printf ("|  ") ;
		}
		printf ("\n") ;
	}
	printf ("\n") ;
}
