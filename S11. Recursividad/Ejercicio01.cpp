/*  
    Ejercicio 1: convertir numero decimal a binario    
*/

#include<iostream>
#include<cstdlib>
using namespace std;

static string aBinario(int n){
    if(n>1){        
        return aBinario(n/2)+to_string(n%2);
    }else{
        return to_string(n%2);
    }
    
};

int main( void ){
    system("color 0a");
    int nro;
    cout<<"\n\t\t[     RECURSIVIDAD     ]\n";
    cout<<"\t\t------------------------\n\n";
    cout<<" EJERCICIO 1: Convertir a binario un numero decimal "<<endl<<endl;

    do{
            cout<<" INGRESE NUMERO: ";
            cin>>nro;
            if(nro<0) cout<<"\nINGRESE UN NUMERO ENTERO Y POSITIVO... \n";
    }while(nro<0);
    cout<<endl;
    cout<<"\n Numero:"<<nro<<endl;
    cout<<"\n Binario:"<<aBinario(nro);

    return 0;
}