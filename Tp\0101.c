// exercice
#include <stdio.h>

int main() {
    // Initialiser la matrice
    char matrix[5][5] = {
        {1, 2, 3, 4, 5},
        {7, 'a', 'c', 8, 'd'},
        {'c', 9, 4, 'z', 8},
        {5, 6, 'p', 'n', 3},
        {2, 9, 't', 'm', 'k'}
    };

    int i, j;

    // Question 1.1 (1) : Afficher la matrice complète
    printf("Matrice complète :\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }

    // Question 1.1 (2) : Afficher uniquement les lignes avec des indices pairs
    printf("\nLignes avec des indices pairs :\n");
    for (i = 0; i < 5; i += 2) {  // Uniquement les lignes avec indices pairs
        for (j = 0; j < 5; j++) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }

    // Question 1.1 (3) : Afficher uniquement les éléments avec des indices pairs dans chaque ligne
    printf("\nÉléments avec des indices pairs dans chaque ligne :\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j += 2) {  // Uniquement les éléments avec indices pairs
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }

    // Question 1.2 : Afficher les diagonales
    // Première diagonale (de haut à gauche vers bas à droite)
    printf("\nDiagonale principale (haut-gauche vers bas-droite) :\n");
    for (i = 0; i < 5; i++) {
        printf("%c ", matrix[i][i]);
    }
    printf("\n");

    // Deuxième diagonale (de haut à droite vers bas à gauche)
    printf("\nDiagonale secondaire (haut-droite vers bas-gauche) :\n");
    for (i = 0; i < 5; i++) {
        printf("%c ", matrix[i][4 - i]);
    }
    printf("\n");

    return 0;
}

// Exercice02


#include <stdio.h>

// Fonction pour échanger les triangles supérieur et inférieur
void echanger_triangles(int matrice[4][4], int taille) {
    int i, j;
    for (i = 0; i < taille; i++) {
        for (j = i + 1; j < taille; j++) {
            // Échanger matrice[i][j] avec matrice[j][i]
            int temp = matrice[i][j];
            matrice[i][j] = matrice[j][i];
            matrice[j][i] = temp;
        }
    }
}

int main() {
    // Initialiser la matrice
    int matrice[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int i, j;

    // Afficher la matrice avant l'échange
    printf("Matrice avant l'échange des triangles :\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }

    // Effectuer l'échange
    echanger_triangles(matrice, 4);

    // Afficher la matrice après l'échange
    printf("\nMatrice après l'échange des triangles :\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }

    return 0;
}
