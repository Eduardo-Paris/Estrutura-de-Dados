//implementar toidas as funcoes do tipo abstrato de dados que eu quero pra analisar os resultados dos times e equipes no campeonato

#include <stdio.h>
#include<stdlib.h>
#include<string.h>

#include "tarefa.h"

Lista * CriarLista(int C){

   Lista * L = (Lista *) malloc(sizeof(Lista));

   if (L == NULL){
      printf("ERRO N EXISTE MEMORIA PARA A ESTRUTURA DA LISTA");
      return NULL;
   }
   L -> Tamanho = 0;
   L -> Capacidade = C;
   L ->Dados = (Tarefa *) malloc(C * sizeof(Tarefa));

   if (L ->Dados == NULL) {
      printf("ERRO N TEM MEMORIA PRO VETOR DE TAREFAS");
      free(L);
      return NULL;

   }
return L;

}

void DestruirLista(Lista * L) {
   if (L == NULL) return;
   free(L->Dados);
   free(L);
}

   