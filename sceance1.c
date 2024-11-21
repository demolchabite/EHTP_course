#include <stdio.h>
#include <stdlib.h>
#define t 1000
int main (){
    int p,h;
    float c,cost;
    printf("Veuillez entrer la puissance utilisée : ");
    scanf("%d",&p);
    printf("veuillez entrer le nombre d'heures consommée : ");
    scanf("%d",&h);
    cost = p*h*t;
    printf("Le prix que vous avez à payer dest de %f dirrahms ",cost);
    return 0;
}

