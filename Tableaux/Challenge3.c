#include <stdio.h>

int main() {
    int n, somme = 0;

    
    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    int tableau[n];  

    for (int i = 0; i < n; i++) {
        printf("Entrez l'element %d : ", i + 1);
        scanf("%d", &tableau[i]);
        somme += tableau[i]; 
    }

    // Affichage la  somme
    printf("\nLa somme des elements est : %d\n", somme);

    return 0;
}
