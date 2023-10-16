// This directive deactivates Warnings for unsecure functions that are deprecated by Microsoft.
// This is not a good practice but is used for pedagogic purposes,
// allowing usage of standard C functions as described in manuals.
// You should use only secured functions named with _s postfix
// e.g. printf_s() rather than printf()
#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <limits.h>
#include <time.h>

/******************************************/
/*   TPC2021 no 2  exo 3				  */
/*                                        */
/******************************************/

int main() {

	setlocale(LC_ALL, "fr-FR");

	int trouve = false;
	int nb_essais = 0;
	int valeur;
	int nbSecret;

	// Seed the random-number generator with the current time so that
	// the numbers will be different every time we run.
	srand((unsigned)time(NULL));


	nbSecret = rand();

	while (trouve == false) {
		nb_essais += 1;
		printf("\ndevinez la valeur de l'entier : ");
		scanf("%d", &valeur);
		if (valeur == nbSecret) {
			printf("\nTrouvé");
			trouve = true;
		} else if (valeur > nbSecret) {
			printf("\nTrop grand");
		} else if (valeur < nbSecret) {
			printf("\nTrop petit");
		}
	}
	printf("\n%d", nb_essais);

	
	return(EXIT_SUCCESS);
}

