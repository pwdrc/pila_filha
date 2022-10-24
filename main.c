#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "pila_filha.h"

int main(){
    int j, i, k = 0, l = 0;
    //int nc, no;
    t_casos nc;
    t_casos no;
    //Número de casos
    scanf("%d", &nc);
    //Número de operacoes
    t_elemento *num;
    t_operacao *op;
    int vetorI[k];
    int vetorR[l];
    for(i = 0; i < nc; i++){
        scanf("%d", &no);
        num = (int *)malloc(no * sizeof(int));
        op = (int *)malloc(no * sizeof(int));
        for(j = 0; j < no; j++){
            //printf("oi");
            scanf("%s %d", &op[j], &num[j]);
            //printf("lendo");
            //vetor inserção
            if(strcmp(op[j], "i") == 0){ 
                vetorI[k] = num[j];
                k++;
                //printf("\nate comparacao i");
            }
            //vetor remoção
            if(strcmp(op[j], "r") == 0){
                vetorR[l] = num[j];
                l++;
                //printf("\nate comparacao r");
            }
            else{
                //inválido
            }
        }
        verificar(num, op, k, l);
    }
}
