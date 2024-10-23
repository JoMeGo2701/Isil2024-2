//Ingresar n elementos en una lista enlazada y luego reprtarlos.
//Los elementos que se ignresan se insertan al inicio de la lista

#include <iostream>
#include <stdlib.h>

using namespace std;

struct nodo{
    int num;
    struct nodo *sgte;
};

typedef struct nodo *TLista;

//Insertar nodos al inicio de la Lista
void insertarI(TLista &inicio, int valor){
    TLista temp;
    //, aux;
    temp = new (struct nodo);
    temp->num=valor;
    temp->sgte=NULL;
    if(inicio==NULL){
        inicio=temp;
    }else{
        temp->sgte=inicio;
        inicio=temp;
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
        insertarI(inicio,dato);     
    }
    
    imprimir(inicio);
    return 0;
}