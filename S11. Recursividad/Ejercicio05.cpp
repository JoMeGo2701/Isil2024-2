/*  
    Ejercicio 3: Calcular la potencia de n    
*/

#include<iostream>
#include<cstdlib>
using namespace std;

long int potencia(int base,int e){
    if(e==0) return 1;
    if(e==1) return base;
    else return base*potencia(base,e-1);
}
int main( void ){
    system("color 0a");
    int b,e;
    cout<<"\n\t\t[     RECURSIVIDAD     ]\n";
    cout<<"\t\t------------------------\n\n";
    cout<<" EJERCICIO 2: Calcular la Potencia de n "<<endl<<endl;
    cout<<" INGRESE BASE: ";
    cin>>b;

    do{
            cout<<" INGRESE EXPONENTE: ";
            cin>>e;
            if(e<0) cout<<"\nINGRESE UN NUMERO ENTERO Y POSITIVO... \n";
    }while(e<0);
    cout<<endl;
    cout<<"\n Base:"<<b;
    cout<<"\n Exp:"<<e;
    cout<<"\n\n RESULTADO: "<<potencia(b,e)<<endl<<endl;

    return 0;
}