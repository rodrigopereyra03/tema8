#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorioVec(int min, int max);
void cargarVector(int v[], int tam);
void mostrarVector(int v[], int tam);
void buscarJoven(int v[], int w[], int tam);


int main(){
    srand(time(0));

    int tam=8;
    int v[tam];
    int r[tam];

    cargarVector(v, tam);
    mostrarVector(v, tam);

    int w[tam];
    cargarVector(w, tam);
    mostrarVector(w, tam);

    buscarJoven(v, w,tam);

    return 0;
}

int aleatorioVec(int min, int max){
    int ale;
    ale= min+ rand()%(max-min+1);
    return ale;
};

void cargarVector(int v[], int tam){
    v[0]=4;
    for(int i=1; i<tam; i++){
        v[i]=aleatorioVec(0,9);
    }
};

void mostrarVector(int v[], int tam){
    printf("||");
    for(int i=0; i<tam; i++){
        printf(" %d ", v[i]);
    }
    printf("||\n");
};

void buscarJoven(int v[], int w[], int tam){
    int resultado = 0 ;

    for (int i =0 ; i<tam; i++){
        resultado = v[i]- w[i];
        if(resultado != 0){
            i = tam;
        }
    }

    if(resultado == 0){
        printf("\nSon la misma persona, mismo dni.\n\n");
    }else{
        if(resultado <0){
            printf("\nLa segunda persona es mas joven.\n\n");
        }
        if(resultado >0){
            printf("\nLa primer persona es mas joven.\n\n");
        }
        }

};
