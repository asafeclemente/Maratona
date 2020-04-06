#include <stdlib.h>
#include <stdio.h>

struct par{
    int primeiro;
    int segundo;
};
int max(int i, int j){
    if (i>j){
        return i;
    }
    else{
        return j;
    }
}

int main (){

    int casos;
    scanf ("%d", &casos);
    struct par numero[casos];

    for (int i=0; i<casos; i++){
        scanf ("%d %d", &numero[i].primeiro , &numero[i].segundo);
    }

    int mdcs[casos];
    for (int contador = 0; contador < casos; contador++){
        for (int mdc= max (numero[contador].primeiro,numero[contador].segundo); mdc>=1 ; mdc--){
            if ((numero[contador].primeiro % mdc ==0) && (numero[contador].segundo % mdc == 0)){
                mdcs[contador]=mdc;
                break;
            }
        }
    }
    for (int i=0; i< casos ;i++){
    printf ("%d\n", mdcs[i]);
    }

    return 0;
}