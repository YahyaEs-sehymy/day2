#include <stdio.h>

int main() {
    int n, i, j, tmp;

    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    int tab[n];

    for(i = 0; i < n; i++) {0.
        
        printf("Entrez l'element %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(tab[j] > tab[j+1]) {
                tmp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = tmp;
            }
        }
    }

    printf("\nTableau trie : ");
    for(i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
