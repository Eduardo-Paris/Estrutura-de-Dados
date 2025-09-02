#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#define TAMANHO 20


int main(){

int Soma = 0;    


 int V[TAMANHO];

  srand(time(NULL));

for(int i = 0; i < TAMANHO; i ++) V[i] = rand();
for(int i = 0; i < TAMANHO; i ++) printf("%d\t", V[i]);

//o rand gera um numero aleatorio


}