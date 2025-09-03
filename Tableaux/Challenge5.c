#include <stdio.h>

int main() {
    int n ,i;

    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    int tableau[n]; 
    int main;        
    for ( i = 0; i < n; i++) {
        printf("Entrez l'element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    main = tableau[0];

    for (int i = 1; i < n; i++) {
        if (tableau[i] < main) {
            main = tableau[i];
        }
    }

    // Affichage du mainimum
    printf("\nLe plus grand element est : %d\n", main);

    return 0;
}
