#include <stdio.h>
#include<stdlib.h>
#include<string.h>

#include "tarefa.h"

int main () {Time * Tabela = Lerdados("tabela.csv");
for (int i = 0; i < 20; i ++)
printf("%d\t%.2f\t%s\n", Tabela[i].Pos, Tabela[i].Aproveitamento, Tabela[i].Equipe);

}

