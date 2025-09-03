#include <stdio.h>

int main() {
    int n ,i ,max;

    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    int tableau[n]; 
    for ( i = 0; i < n; i++) {
        printf("Entrez l'element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    max = tableau[0];


    for (int i = 1; i < n; i++) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }

    // Affichage du maximum
    printf("\nLe plus grand element est : %d\n", max);

    return 0;
}
