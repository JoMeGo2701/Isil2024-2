/*
    Ejercicio 2: Suma de los n primeros numeros naturales  
*/

#include<iostream>
#include<cstdlib>
using namespace std;

int suma(int nro){
    if(nro==0) return 0;
    if(nro==1) return 1;
    else return nro+suma(nro-1);
}
int main( void ){
    system("color 0a");
    int nro;
    cout<<"\n\t\t[     RECURSIVIDAD     ]\n";
    cout<<"\t\t------------------------\n\n";
    cout<<" EJERCICIO 2: Suma de N primeros Numeros Naturales"<<endl<<endl;
    cout<<" INGRESE CANTIDAD DE TERMINOS:";
    cin>>nro;

    cout<<endl<<endl;
    for(int i=1;i<nro+1;i++){   //Mostramos la sucesion de terminos
        cout<<i;
        if(i<nro) cout<<" + ";
    }
    cout<<"\n\nLa Suma es: "<<suma(nro)<<endl<<endl;

    return 0;
}