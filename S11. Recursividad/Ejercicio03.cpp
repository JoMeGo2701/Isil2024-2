 /*
 Ejercicio 1: calcula el MCD de dos numeros  
*/

#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;

int mcd(int a, int b){
    if(b==0) return a;
    else mcd(b,a%b);
}
int main( void ){
    system("color 0a");
    int a,b;
    cout<<"\n\t\t[     RECURSIVIDAD     ]\n";
    cout<<"\t\t------------------------\n\n";
    cout<<" EJERCICIO 8: Calcula el MCD de dos numeros "<<endl<<endl;
    /*Validamos que "a" sea positivo y entero*/
    do{
        cout<<" INGRESE PRIMER NUMERO: ";
        cin>>a;
        if(a<0) cout<<"\nINGRESE UN NUMERO ENTERO Y POSITIVO... \n";
    }while(a<0);
    /*Validamos que "b" sea positivo y entero*/
    do{
        cout<<" INGRESE SEGUNDO NUMERO: ";
        cin>>b;
        if(b<0) cout<<"\nINGRESE UN NUMERO ENTERO Y POSITIVO... \n";
    }while(b<0);
    /*si a>b llama a mcd(a,b)*/
    if(a>b)
        cout<<"\n MDC( "<<a<<" , "<<b<<" ) =  "<<mcd(a,b)<<endl<<endl;
    else
    if(a<b) /*si b>a llama a mcd(b,a)*/
        cout<<"\n MDC( "<<b<<" , "<<a<<" ) =  "<<mcd(b,a)<<endl<<endl;

    return 0;
}