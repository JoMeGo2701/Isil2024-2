#include <iostream>

using namespace std;

void insertar(int v[], int dim){
    for(int i=0;i<dim;i++){
        cout<<"Ingresar elem ["<<(i+1)<<"]:";
        cin>>v[i];
    }
    cout<<endl;
};

void imprimir(int v[], int dim){
    cout<<" === PILA === "<<endl;
    for(int i=dim-1;i>=0;i--){
        cout<<v[i]<<endl;
    }
    cout<<endl;
};

int extraer(int dim){
    return(dim-1);
};

int main()
{
    int vector[100],n;
    cout<<"Ingresar número de elementos:";
    cin>>n;
    insertar(vector,n);
    imprimir(vector,n);
    n=extraer(n);
    imprimir(vector,n);
    return 0;
}