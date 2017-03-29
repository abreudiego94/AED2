#include "Ordenacao.h"
#include <iostream>
using namespace std;


Ordenacao::Ordenacao(){

}

Ordenacao::~Ordenacao(){
    //dtor
}
void Ordenacao::print(){
     int i = 0 ;
     int aux =  0;
     int quantidadeDeElementos = sizeof(numeros)/4;

     for(int i = 0 ; i<quantidadeDeElementos ; i++){

        cout<< numeros[i]<<endl;
    }
}

void Ordenacao::bubbleSort(){

 int i = 0 ;
 int aux =  0;
 int quantidadeDeElementos = sizeof(numeros)/4;

 for(i = 0 ; i<quantidadeDeElementos ; i++){
    for(int j = 0 ; j<quantidadeDeElementos  ; j++){
        if(numeros[j] > numeros[j+1]){
            aux = numeros[j];
            numeros[j] = numeros[j+1];
            numeros[j+1] = aux;
        }
    }

 }
Ordenacao::print();
}
void Ordenacao::bubbleSortMelhoramentoUm(){
 int i = 0 ;
 int aux =  0;
 int quantidadeDeElementos = sizeof(numeros)/4;
 for(i = 0 ; i<quantidadeDeElementos ; i++){


    for(int j = 0 ; j <  quantidadeDeElementos - i   ; j++){

        if(numeros[j] > numeros[j+1]){
            aux = numeros[j];
            numeros[j] = numeros[j+1];
            numeros[j+1] = aux;
        }
    }

 }
Ordenacao::print();

}

void Ordenacao::bubbleSortMelhoramentoDois(){
 int i = 0 ;
 int aux =  0;
 int quantidadeDeElementos = sizeof(numeros)/4;
 bool trocou = false ;
 for(i = 0 ; i<quantidadeDeElementos ; i++){


    for(int j = 0 ; j <  quantidadeDeElementos - i   ; j++){

        if(numeros[j] > numeros[j+1]){
            trocou = true;
            aux = numeros[j];
            numeros[j] = numeros[j+1];
            numeros[j+1] = aux;
        }
    }
    if(trocou == false){
        break ;
    }

 }
Ordenacao::print();

}
