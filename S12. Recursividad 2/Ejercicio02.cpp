#include <iostream>

using namespace std;

class Nodo
{
public:
    int dato;
    Nodo *siguiente;
    Nodo(int dato)
    {
        this->dato = dato;
        this->siguiente = NULL;
    }
};

class Lista
{
private:
    //Agrega al final de la lista
    void agregarRecursivo(Nodo *n, int dato)
    {
        if (n->siguiente == NULL){
            n->siguiente = new Nodo(dato);
        }
        else{
            this->agregarRecursivo(n->siguiente, dato);
        }
    }

    void imprimirRecursivo(Nodo *n)
    {
        if (n != NULL){
            cout << "Tenemos " << n->dato << endl;
            this->imprimirRecursivo(n->siguiente);
        }
    }

    void eliminarRecursivo(Nodo *n, int dato)
    {
        if (n == NULL){
            return;
        }
        if (n->dato == dato && n == this->cabeza){
            Nodo *temporal = this->cabeza;
            if (this->cabeza->siguiente != NULL)
            {
                this->cabeza = this->cabeza->siguiente;
                delete temporal;
            }else{
                this->cabeza = NULL;
            }
            return;
        }
        if (n->siguiente != NULL && n->siguiente->dato == dato){
            Nodo *temporal = n->siguiente;
            if (n->siguiente != NULL){
                n->siguiente = n->siguiente->siguiente;
            }
            delete temporal;
        }
        else{
            this->eliminarRecursivo(n->siguiente, dato);
        }
    }
    
    bool existeRecursivo(Nodo *n, int dato){
        if (n == NULL){
            return false;
        }
        if (n->dato == dato){
            return true;
        }
        return this->existeRecursivo(n->siguiente, dato);
    }

public:
    Nodo *cabeza;
    void copiaSinDuplicados(Lista *l){
        Nodo *temporal = this->cabeza;
        while (temporal != NULL){
            if (!l->existe(temporal->dato)){
                l->agregar(temporal->dato);
            }
            temporal = temporal->siguiente;
        }
    }
    
    void eliminar(int dato)
    {
        this->eliminarRecursivo(this->cabeza, dato);
    }
    void agregar(int dato){
        if (this->cabeza == NULL)
        {
            this->cabeza = new Nodo(dato);
        }else{
            this->agregarRecursivo(this->cabeza, dato);
        }
    }

    void imprimir(){
        cout << "Imprimiendo " << endl;
        this->imprimirRecursivo(this->cabeza);
    }
    
    bool existe(int dato){
        return this->existeRecursivo(this->cabeza, dato);
    }
};

int main()
{
    Lista *l = new Lista();
    l->agregar(1);
    l->eliminar(1);
    l->agregar(2);
    l->agregar(3);
    l->agregar(4);
    l->agregar(5);
    l->imprimir();
    l->eliminar(3);
    l->imprimir();
    l->agregar(3);
    l->eliminar(1);
    l->eliminar(2);
    l->eliminar(3);
    l->eliminar(4);
    l->eliminar(5);
    l->imprimir();
    l->agregar(123);
    l->agregar(123);
    l->agregar(123);
    l->agregar(123);
    l->agregar(88);
    l->agregar(123);
    l->agregar(123);
    l->agregar(88);
    l->agregar(123);
    l->agregar(88);
    l->agregar(60);
    l->imprimir();
    Lista *sinDuplicados = new Lista();
    l->copiaSinDuplicados(sinDuplicados);
    sinDuplicados->imprimir();
    return 0;
}