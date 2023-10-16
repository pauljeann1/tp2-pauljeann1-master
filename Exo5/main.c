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
/*   TPC2021 no 2  exo 5                  */
/*                                        */
/******************************************/

// Ecrire un programme qui calcule le plus petit multiple commun � ppcm - de trois nombres entiers naturels non nuls.
// Le ppcm est la plus petite valeur enti�re qui peut �tre divis�e par chacun de ces nombres.
// Le programme doit afficher la valeur du ppcm ainsi que le nombre d'op�rations arithm�tiques r�alis�es pour calculer le r�sultat.
// Comparer cette derni�re valeur avec celle obtenue par d'autres �tudiants.


	int main(){
		setlocale(LC_ALL, "fr-FR");

		// Soit 3 valeurs enti�res non nulles dont on souhaite calculer le ppcm
		unsigned int valA ;
		unsigned int valB ;
		unsigned int valC ;
		int acc = 0;


		printf("Entrez votre première valeur : ");
		scanf("%d", &valA);
		printf("Entrez votre deuxième valeur : ");
		scanf("%d", &valB);
		printf("Entrez votre troisième valeur : ");
		scanf("%d", &valB);

		int i = valA;
		while ((valA % i == 0) && (i != 0)) {
			acc = acc + 1;
			if ((valB % i != 0) || (valC % i != 0)) {
				i = i - 1;
			}
		}

		printf("Le ppcm de %d, %d, %d est égal à %d \n", valA, valB, valC, i);
		printf("il y a eu %d opérations de calculs", acc);



	return EXIT_SUCCESS;
}
