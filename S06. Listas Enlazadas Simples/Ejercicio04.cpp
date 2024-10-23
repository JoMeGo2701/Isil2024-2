//INGRESAR ELEMENTOS REALES EN UNA LISTA Y CALCULAR EL MAYOR,
//EL MENOR Y EL PROMEDIO

#include <iostream>
#include <stdlib.h>

using namespace std;

struct nodo{
    float num;
    struct nodo *sgte;
};

typedef struct nodo *TLista;

//Insertar nodos al final de la Lista
void insertarF(TLista &inicio, float valor){
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

//Insertar nodos al final de la Lista
void calcularMayor(TLista &inicio){
    TLista aux;
    float mayor;
    if(inicio==NULL){
        cout <<"Lista Vacia"<<endl;
    }else{
        aux=inicio;
        mayor=aux->num;
        while(aux->sgte!=NULL){
            aux=aux->sgte;
            if (mayor<aux->num){
                mayor=aux->num;
            }
            
        }
        cout<<"El mayor es: "<<mayor<<endl;
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
    float dato; 
    cout << "Ingrese número de elementos: ";
    cin>> n;
    for (i=0;i<n;i++){
        cout<<"Elemento ["<<(i+1)<<"]:";
        cin>>dato;
        insertarF(inicio,dato);     
    }
    imprimir(inicio);
    calcularMayor(inicio);
    return 0;
}