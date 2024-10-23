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

//
//Eliminar un nodo de la lista
void eliminarnodo(TLista &inicio, int valor){
    TLista ptr,ant; 
    if(inicio->num==valor) { 
        ptr=inicio; 
        inicio=inicio->sgte; 
        delete(ptr); 
    } else { 
        ant=NULL; 
        ptr=inicio; 
        while(ptr->num!=valor) { 
            ant=ptr; 
            ptr=ptr->sgte; 
        } 
        ant->sgte=ptr->sgte; 
        delete (ptr); 
    }
};


//Eliminar un nodo de la lista
void buscarnodo(TLista &inicio, int valor){
    TLista ptr;    
    ptr=inicio; 
    while(ptr!=NULL && ptr->num!=valor) {             
        ptr=ptr->sgte; 
    } 
    if (ptr!=NULL){                   
        cout<<" Encontrado";
    }else{
        cout<<" No Encontrado";
    }
};

void menu1(){ 
    cout<<"\n\t\tLista Enlazadas \n\n"<<endl; 
    cout<<"1. Insertar nodo Final "<<endl; 
    cout<<"2. Insertar nodo inicio "<<endl; 
    cout<<"3. Insertar "<<endl; 
    cout<<"4. Imprimir la lista "<<endl; 
    cout<<"5. Eliminar nodo "<<endl; 
    cout<<"6. Buscar nodo "<<endl; 
    // Si el nodo esta y que posición se encuentra 
    cout<<"7. Salir "<<endl; 
    cout<<"\n Ingrese la opción ";
}

// Modulo principal

int main(int argc, char *argv[]){ 
    TLista inicio = NULL; 
    int op; 
    int dato; 
    //int pos; 
    do {
        menu1();
        cin>> op;
        switch(op) { 
            case 1: cout<< "\n NUMERO A INSERTAR: "; 
                    cin>> dato; 
                    insertarF(inicio,dato); 
                    break; 
            case 2: cout<< "\n NUMERO A INSERTAR: "; 
                    cin>> dato; 
                    insertarI(inicio,dato); 
                    break; 
            case 3: break; 
            case 4: cout<< "\n Impresion de la Lista "<<endl; 
                    if (inicio==NULL) 
                        cout<< "\n La lista esta vacía "<<endl; 
                    else 
                        imprimir(inicio); 
                    break; 
            case 5: cout<< "\n Eliminar nodo de la lista "<<endl; 
                    if (inicio==NULL) 
                        cout<< "\n La lista esta vacía "<<endl; 
                    else {
                        cout<< "\n Digite el número a Eliminar: "; 
                        cin>> dato; 
                        eliminarnodo(inicio,dato); 
                    } 
                    break; 
            case 6: cout<< "\n Buscar nodo de la lista "<<endl; 
                    if (inicio==NULL) 
                        cout<< "\n La lista esta vacía "<<endl; 
                    else {
                        cout<< "\n Buscar: "; 
                        cin>> dato; 
                        buscarnodo(inicio,dato); 
                    }
                    break; 
            case 7: break;
        } 
        cout<<endl; 
        system("pause"); 
        system("cls"); 
    }while (op!=7);
    system("pause");
    return 0;
}

