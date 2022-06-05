all : prgm

tempslimite.o : tempslimite.c tempslimite.h 
    gcc -c $< -o $@

aleatoire.o : aleatoire.c aleatoire.h
    gcc -c $< -o $@

ligne.o : ligne.c ligne.h 
    gcc -c $< -o $@

orientation.o : orientation.c orientation.h
    gcc -c $< -o $@

score.o : score.c score.h 
    gcc -c $< -o $@

structurejoueur.o : structurejoueur.c structurejoueur.h 
    gcc -c $< -o $@

tableau.o : tableau.c tableau.h 
    gcc -c $< -o $@

tetris.o : tetris.c tetris.h
    gcc -c $< -o $@

prgm: tempslimite.o aleatoire.o ligne.o orientation.o score.o structurejoueur.o tableau.o tetris.o
    gcc $^ -o $@
