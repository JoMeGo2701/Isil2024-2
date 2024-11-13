/*
    Ejercicio 4: Calcular el producto de dos numeros  
*/

#include<iostream>
#include<cstdlib>
using namespace std;

int producto(int a,int b){
    if(a==0||b==0) return 0;
    if(a==1) return b;
    if(b==1) return a;
    else return a+producto(a,b-1);
}
int main( void ){
    system("color 0a");
    int a,b;
    cout<<"\n\t\t[     RECURSIVIDAD     ]\n";
    cout<<"\t\t------------------------\n\n";
    cout<<" EJERCICIO 3: Calcular el Producto de 2 numeros "<<endl<<endl;
    cout<<" INGRESE MULTIPLICANDO: ";
    cin>>a;
    cout<<" INGRESE MULTIPLICADOR: ";
    cin>>b;

    cout<<endl;
    cout<<"\n MDO:"<<a;
    cout<<"\n MDOR:"<<b;
    cout<<"\n\n RESULTADO: "<<producto(a,b)<<endl<<endl;

    return 0;
}