#include <stdio.h>
int main(){
    //Question1 : Moyenne des entiers pairs
    //Question2 : Nombre des entiers impairs
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

        if(M % 2 != 0){
            compteur++;
        }
    }
    printf("Le nombre des entiers impaires est : %.d\n",compteur);

    return 0;
}
