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
#include <math.h>

/******************************************/
/*   TPC2021 no 2  exo 4                  */
/*                                        */
/******************************************/
// Ecrire un programme qui d�compose une valeur de type unsigned int entr�e au clavier 
// en une suite de chiffres s�par�s par des tirets.
// L'algorithme est bas� sur une m�thode num�rique et non une m�thode bas�e sur le traitement d'une cha�ne de caract�res.
// Par exemple la valeur 5763161 produit l'affichage 5-7-6-3-1-6-1
/*
Valeur max 4294967295

Entrez une valeur(0 pour fin) : 1

1
Valeur max 4294967295
Entrez une valeur : 456

4 - 5 - 6
Valeur max 4294967295
Entrez une valeur : 4294967295

4 - 2 - 9 - 4 - 9 - 6 - 7 - 2 - 9 - 5
Valeur max 4294967295
Entrez une valeur : 0
*/

int main() {

	unsigned int valeur;
	unsigned int tmp;
	int acc = 0;
	int soustraction = 0; 

	printf("\nEntrez votre valeur : ");
	scanf("%u", &valeur);

	while (valeur != 0) {
		tmp = valeur;
		while (tmp > 10) {
			tmp = tmp / 10;
			acc = acc + 1;
		}
		printf("%u - ", tmp);
		if (tmp == 0) {
			soustraction = pow(10, acc);
		}
		else {
			soustraction = tmp * pow(10, acc);
		}
		valeur = valeur - soustraction;
		acc = 0;
	}

}