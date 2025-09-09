void InsertionSort

// funcao principal

int main (){

    int Conjunto[] = {1, 9, 7, 8, 5, 2};
    int Tamanho = sizeof(Conjunto) / sizeof(int);
    ExibirVetor(Conjunto, Tamanho);
    printf("Vetor ordenado: \n");
    
    }

void Insertiosort(int * V, int N){

    int Chave; //elemento será inserido na parte ordenada
    int i; // Posição (ou cordenada) do elemento chave
    int j; // Posição de elemento da "parte ordenada" que será comprada com chave 

    for(i = 1; i < N; i++){

        Chave = V [i];
        j = i - 1;

        while(j >= 0 && V[j] > Chave){
            V[j + 1] = V[j];
            j--;
        }

        V[j + 1] = Chave; //copiando o chave no ultimo lugar modificado
        ExibirVetor(V, N);
    }

}

void ExibirVetor(int * V, int N){

    int j;
}