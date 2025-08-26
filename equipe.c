//implementar toidas as funcoes do tipo abstrato de dados que eu quero pra analisar os resultados dos times e equipes no campeonato

#include <stdio.h>
#include<stdlib.h>
#include<string.h>

#include "equipe.h"

Time * LerDados(char * Arquivo){
    Time * X = malloc(20 * sizeof(Time));
    if(X == NULL){


   printf ("ERRO, MEMORIA FALTANDO!\n");
   exit(1);
   }

   FILE * fp = fopen(Arquivo, "r");
   if(fp == NULL){
    printf("ERRO ARQUIVO N PODE SER ABERTO");
    exit(1);
   }

int i = 0;
char cabecalho[100];
fscanf(fp, "%s", cabecalho);

 while(fscanf(fp, "%d;%[^ ;];%[^ ;];%d;%d;%d;%d;%d;%d;%d;%d", &X[i].Pos, X[i]. Estado, X[i].Equipe, &X[i].Pts, &X[i].J, &X[i]. V,&X[i].E, &X[i].D, &X[i].GP, &X[i].GC, &X[i].SG) == 11) {

 


printf("%s\n", X[i].Equipe);

X[i].Aproveitamento = (float) 100 * X[i].Pts / (3 * )
i++;

}


   fclose(fp);
   return X;
   
   
   
   
}
   