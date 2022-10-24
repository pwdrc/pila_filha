#include "pila_filha.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verificar(t_elemento num[], t_operacao op[], int k, int l){
    int countf = 0, countp = 0, naof = 0, naop = 0, j;
    int vetorI[k];
    int vetorR[l];

    for(int n = 0; n < l; n++){
        /*Se o vetor de inserção e o vetor de remoção forem iguais até a posição final
        do vetor de remoção, então será uma fila*/
        if(vetorI[n] == vetorR[n]){
            //variavel contador fila
            countf++;
        }
        //Se em algum momento o elemento das posições forem diferentes, ou seja, não é fila
        else{
            //naof++;
            break;
        }
    }  
    for(int m = 0; m < l; m++){
        /*Se o vetor de inserção e o vetor de remoção forem iguais até a posição final
        do vetor de remoção, então será uma pilha*/
        if(vetorI[m] == vetorR[m]){
            //varaivel contador pilha
            countp++;
        }
        //Se em algum momento o elemento das posições forem diferentes, ou seja, não é pilha
        else{
            //naop++;
            break;
        }
    }

    //Identificação
    if(countf==l && countp==l){
        printf("inderteminado");
    }
    else if(countf!=l && countp!=l){
        printf("impossivel");
    }
    else if(countf!=l && countp==l){
        printf("pilha");
    }
    else if(countf==l && countp!=l){
        printf("fila");
    }
}
