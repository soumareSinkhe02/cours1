#include <stdio.h>
int main(){
    //Question1 : Moyenne des entiers pairs
    //Auteur : Synkhe Soumare

    int i, N, M, compteur, S;
    float moyenne;

    do{
        printf("Veuillez entrer le nombre d'entiers a saisir : ");
        scanf("%d",&N);

        if(!(N > 0))
            puts("Erreur ! l'entier doit etre positif.");
    }while(!(N > 0));
    S = 0, compteur = 0;
    for(i = 1; i <= N; i++){
        do{
            puts("Veuillez saisir un entier positif : ");
            scanf("%d",&M);
        }while(!(M > 0));

        if(M % 2 == 0){
            compteur++;
            S += M;
        }
    }
    moyenne = (float)S / compteur;
    printf("La moyenne des entiers paires est : %.2f\n",moyenne);

    return 0;
}
