#include <stdio.h>

int main() {
    int n ,i;

    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    int tableau[n]; 


    for ( i = 0; i < n; i++) {
        printf("Entrez l'element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }


    // Affichage des éléments pairs
    printf("\nLes elements pairs sont :\n");
    for (int i = 0; i < n; i++) {
        if (tableau[i] % 2 != 0) {
            printf("%d\n", tableau[i]);
        }
    }

    return 0;
}
