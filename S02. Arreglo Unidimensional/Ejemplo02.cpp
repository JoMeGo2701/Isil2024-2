#include <iostream>
 
using namespace std;
 
int main()
{
    int v[10];// forma un arreglo de tamaño 10
    int i, aux,aux2;
    v[0]=2;
    v[1]=5;
    v[2]=7;
    v[3]=4;
    v[4]=8;
    v[5]=0;
    v[6]=3;
    v[7]=1;
    v[8]=6;
    v[9]=9;
    cout<<endl<<"v[i] : [  ";
    for (i=0;i<10;i++){
        cout<<v[i]<<"  ";
    }
    cout << "]"<<endl;
    cout <<endl<<"Ingrese valor a buscar: ";
    cin >> aux;
    cout <<"Ingrese valor a ingresar: ";
    cin >> aux2;
    for (i=0;i<10;i++) {
        if (v[i]==aux){
            v[i]=aux2;
            break;
        }        
    }
    cout<<endl<<"v[i] : [ ";
    for (i=0;i<10;i++){
        cout<<v[i]<<"  ";
    }
    cout << "]"<<endl;
    return 0;
}