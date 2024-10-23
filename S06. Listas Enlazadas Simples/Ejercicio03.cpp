//Ingresar n elementos en una lista enlazada y luego reprtarlos.
//Los elementos que se ignresan se insertan al final de la lista

#include <iostream>
#include <stdlib.h>

using namespace std;

struct nodo{
    int num;
    struct nodo *sgte;
};

typedef struct nodo *TLista;

//Insertar nodos al final de la Lista
void insertarF(TLista &inicio, int valor){
    TLista temp, aux;
    temp = new (struct nodo);
    temp->num=valor;
    temp->sgte=NULL;
    if(inicio==NULL){
        inicio=temp;
    }else{
        aux=inicio;
        while(aux->sgte!=NULL){
            aux=aux->sgte;
        }            
        aux->sgte=temp;        
    }
};

//Imprimir la lsita enlazada
void imprimir(TLista &inicio){
    int i=0;
    TLista ptr;
    ptr=inicio;
    while(ptr!=NULL){
        cout<<' '<<i+1<<") "<<ptr->num<<endl;
        ptr=ptr->sgte;
        i++;
    }
};

// Modulo principal
int main(int argc, char *argv[]){ 
    TLista inicio = NULL; 
    int i,n;
    int dato; 
    cout << "Ingrese número de elementos: ";
    cin>> n;
    for (i=0;i<n;i++){
        cout<<"Elemento ["<<(i+1)<<"]:";
        cin>>dato;
        insertarF(inicio,dato);     
    }
    
    imprimir(inicio);
    return 0;
}