#ifndef EQUIPE_H
#define EQUIPE_H

typedef struct {
   
   int Pos;  //posuicao no cb2024
   char Estado [30];
   char Equipe [50]; //nome do time 
   int Pts;
   int J;
   int V;
   int E;
   int D;
   int GP; //Gols pro
   int GC; //Gols contra (sofridos)
   int SG; //saldo de gols SG = GP - GS
    float Aproveitamento;

   } Time; 
   
Time * LerDados(char * Arquivo);

#endif