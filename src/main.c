#include "../lib/identification/identification.h"
#include "../lib/recherche_salle/recherche_salle.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>


// ****** MAIN ******
int main() {
    printf("%d\n",recherche_salle(2,219,"Friday",8,15));

	if (identification()) {
		printf("BIENVENUE SUR NOTRE PLATFORME \n");
	}

	return 0;
}

