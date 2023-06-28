#include <iostream>
#include "pilha.h"

using namespace std;

pilha::pilha(){
    tamanho = 0;
    estrutura = new TipoItem[max_item];
}  
pilha::~pilha(){
    delete [] estrutura;
}        
bool pilha::estacheia(){
    return (tamanho == max_item);
}
bool pilha::estavazia(){
    return (tamanho == 0);
}    
void pilha::push(TipoItem item){
    if (estacheia()) {
        cout << "A pilha está cheia\n";
        cout << "Nao e possivel inserir este elemento !\n";
       
    } else {
        estrutura[tamanho] = item;
        tamanho++;
    }
}
TipoItem pilha::pop(){
    if (estavazia()) {
        cout << "A pilha está vazia\n";
        cout << "Nao tem elemento para ser removido!\n";
        return 0;
    } else {
        tamanho--;
        return estrutura[tamanho];
    }
}
void pilha::imprimir(){
    cout << "Pilha [";
        for(int i=0; i<tamanho; i++){
            cout << estrutura[i] << "";
        }
    cout << "]\n";
}

int pilha::qualtamanho(){
    return tamanho;
}