#include <stdio.h>
#include <time.h>

void TrocarElemento(int* A, int * B);
int Particao(int * V, int Inf, int Sup);

int main() {

int Vetor []= {3, 6, 4, 5, 1, 7, 2}
int 

}
    void TrocarElemento(int * A, int * B){

        //obs a e b são ponteiros guardam enderecos de memoria

        int temp = *A;
        *A = *B;
        *B = temp;
    
}
 
int Particao(int * V, int Inf, int Sup) {
    int Pivot = V[(Inf + Sup) / 2];
    printf("Pivot: %d\n", Pivot);
    int i = Inf;
    int j = Sup;

    while (i <= j){
        while(V[i] < Pivot) i++;
        while(V[j] > Pivot) j++;
        if (i <= j){
            TrocarElemento (&V[i], &V[j]);

            i++;
            j--;

        }
    }
return i;
}

void QuickSort(int * V, int Inf, int Sup) {
    if (Inf < Sup) {
        int P = Particao(V, Inf, P - 1);
       QuickSort(V, Inf, P - 1);
       QuickSort(V, P, Sup);
    }
}