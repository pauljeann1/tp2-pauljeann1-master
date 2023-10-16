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

/******************************************/
/*   TPC2021 no 2  exo 2				  */
/*                                        */
/******************************************/
// Ecrire un programme nomm� Exo2, qui permet � l'utilisateur d'entrer les trois dimensions 
// d'un bagage et v�rifie qu'il est �ligible � l'embarquement dans la cabine d'un avion 
// puisque sa taille n'exc�de pas 55 cm x 35 cm x 25 cm.
int main() {

	float hauteur = 0.0, largeur = 0.0, longueur = 0.0, tmp = 0.0;
	printf("Entrez une hauteur : ");
    scanf("%f", &hauteur);
	printf("Entrez une largeur : ");
	scanf("%f", &largeur);
	printf("Entrez une longueur : ");
	scanf("%f", &longueur);

	if (largeur > hauteur) {
		tmp = hauteur;
		hauteur = largeur;
		largeur = tmp;
	}
	else if (longueur > hauteur) {
		tmp = hauteur;
		hauteur = longueur;
		longueur = tmp;
	}
	else if (largeur > longueur) {
		tmp = longueur;
		longueur = largeur;
		largeur = tmp;
	}

	if ((hauteur > 55) || (longueur > 35) || (largeur > 25)) {
		printf("le bagage est trop grand \n");
	}
	else {
		printf("Le bagage est correct \n");
	}
	

	return(EXIT_SUCCESS);
}

