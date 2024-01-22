#include <stdio.h>


void chargerT(int tableX[6],int num) {
    for (int i = 0; i < 6; i++) {
        printf("entrez le num : ");
        scanf("%d", &num);
        tableX[i] = num;
        tableX[i] = tableX[i] * tableX[i];
    }
}


void afficherT(int tableX[6]) {
    for (int j = 0; j < 6; j++) {
        printf(" le carre de les nums  : %d \n", tableX[j]);
    }
}

int main() {
    int num;
    int tableX[6];


    chargerT(tableX, num);


    afficherT(tableX);

    return 0;
}