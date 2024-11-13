/*  
    Ejercicio 4: Invertir un numero    
*/

#include<iostream>
#include<cstdlib>
using namespace std;

void invertir(int nro){
    cout<<nro%10;
    if (nro>10) invertir(nro/10);

}
int main( void ){
    system("color 0a");
    int nro;
    cout<<"\n\t\t[     RECURSIVIDAD     ]\n";
    cout<<"\t\t------------------------\n\n";
    cout<<" EJERCICIO 4: Invertir un numero "<<endl<<endl;
    do{
            cout<<" INGRESE NUMERO: ";
            cin>>nro;
            if(nro<0) cout<<"\nINGRESE UN NUMERO ENTERO Y POSITIVO... \n";
    }while(nro<0);
    cout<<"\n NUMERO:"<<nro;
    cout<<"\nINVERTIDO:";
    invertir(nro);
    cout<<endl<<endl;
    return 0;
}