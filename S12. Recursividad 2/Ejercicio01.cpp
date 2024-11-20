
#include <iostream>

using namespace std;

class Nodo{
        public:
            int info;
            Nodo *sig;
};

class Lista{
    Nodo *raiz;
    void imprimir(Nodo *reco);
    
    public:
        Lista();
        ~Lista();
        void insertarPrimero(int x);
        void imprimir();
};

Lista::Lista(){
    raiz=NULL;
}

Lista::~Lista(){
    Nodo *reco = raiz;
    Nodo *bor;
    while (reco != NULL){
        bor = reco;
        reco = reco->sig;
        delete bor;
    }
}

void Lista::insertarPrimero(int x){
    Nodo *nuevo = new Nodo();
    nuevo->info = x;
    nuevo->sig=raiz;
    raiz = nuevo;
}

void Lista::imprimir(Nodo *reco){
    if(reco!=NULL){
        cout<<reco->info<<"    ";
        reco=reco->sig;
        imprimir(reco);
    }
}

void Lista::imprimir(){
    imprimir(raiz);
}


int main()
{
    Lista *l = new Lista();
    l->insertarPrimero(10);
    l->insertarPrimero(4);
    l->insertarPrimero(5);
    cout<<"Lista de Elementos"<<endl;
    l->imprimir();
    delete l;
    return 0;
}