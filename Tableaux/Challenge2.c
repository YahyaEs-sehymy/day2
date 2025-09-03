#include <stdio.h>

int main() {
    int n;

    
    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    
    int tableau[n];  // déclaration d'un tableau avec taille dynamique

    // saisie des éléments
    for (int i = 0; i < n; i++) {
        printf("Entrez l'element %d : ", i + 1);
        scanf("%d", &tableau[i]);

    }

    // affichage des éléments
    printf("\nLes elements du tableau sont :\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", tableau[i]);
    }

    return 0;
}
