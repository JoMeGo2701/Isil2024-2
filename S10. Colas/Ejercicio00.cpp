/* QUE PERMITA INSERTAR UN INT Y MOSTRAR*/

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
  int dato;  
  Nodo *siguiente;
};

int main(int argc, char *argv[]);
void insertarCola(Nodo *&,Nodo *&);
void eliminarCola(Nodo *&);
bool cola_vacia(Nodo *);
void mostrarCola(Nodo *);
void menu(Nodo *&,Nodo *&);

int main(int argc, char *argv[]){
  Nodo *frente = NULL;
  Nodo *fin = NULL;
  menu(frente,fin);
  //insertarCola(frente,fin,dato);
  //mostrarCola(frente);
  return 0;
}

void menu(Nodo *&frente, Nodo *&fin){
    int opc;
    do{
        cout<<"========================"<<endl;
        cout<<"****MENÚ DE OPCIONES****"<<endl;
        cout<<"========================"<<endl;
        cout<<"1. Insertar Dato en Cola"<<endl;
        cout<<"2. Mostrar Datos en Cola"<<endl;
        cout<<"3. Eliminar Datos en Cola"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"========================"<<endl;
        cout<<"Ingrese opción: ";
        cin>>opc;
        cout<<"========================"<<endl;    
        if(opc !=1 && opc!=2 && opc !=3 && opc !=4){
            cout<<"Opción no valida";
        }else{
            switch(opc){
                case 1: insertarCola(frente,fin);
                        break;
                case 2: mostrarCola(frente);
                        break;
                case 3: eliminarCola(frente);
                        break;
                default: break;
            }
        }
    }while(opc!=4);
}


void insertarCola(Nodo *&frente, Nodo *&fin){
    int dato;
    cout<<"Ingrese dato: ";
    cin>>dato;
    Nodo *nuevo = new Nodo();
    nuevo->dato=dato;
    nuevo->siguiente=NULL;
    if(cola_vacia(frente)){
      frente = nuevo;
    }else{
      fin->siguiente=nuevo;
    }
    fin=nuevo;
};

bool cola_vacia(Nodo *frente){
  if(frente==NULL){
    return true;
  }else{
    return false;
  }
};

void mostrarCola(Nodo *frente){
   Nodo *aux;
   aux=frente;
   cout<<"DATOS EN COLA"<<endl;
   int i=1;
    while(aux!=NULL){
    cout<<"C["<<i<<"]: "<<aux->dato<<endl;
    aux=aux->siguiente;
    i++;
  }
};

void eliminarCola(Nodo *&frente){
    int n;
    Nodo *aux;
    aux=frente;
    if(cola_vacia(frente)){
      frente = NULL;
    }else{
        n= frente->dato;
        cout<<"DATO A ELIMINAR: "<<n<<endl;
        frente=frente->siguiente;
    }
    delete aux;
}



