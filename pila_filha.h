#ifndef PILAFILHA_H
#define PILAFILHA_H
#define NUM_STRINGS 10
typedef int t_elemento;
typedef char t_operacao[10];
typedef int t_casos;

typedef struct t_elementos {
	t_elemento *num;
	t_operacao *op;
} t_elementos;

int verificar(t_elemento num[], t_operacao op[], int k, int l);

#endif
