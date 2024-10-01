#include <iostream>
 
using namespace std;
//programa que ingresa por lugar=posicion-1
int main()
{
    int v[100];// forma un arreglo de tamaño 100
    int i, n=10, pos,aux;
    v[0]=0;
    v[1]=1;
    v[2]=2;
    v[3]=3;
    v[4]=4;
    v[5]=5;
    v[6]=6;
    v[7]=7;
    v[8]=8;
    v[9]=9;
    cout<<endl<<"v[i] : [  ";
    for (i=0;i<n;i++){
        cout<<v[i]<<"  ";
    }
    cout << "]"<<endl;    
    cout <<endl<<"Ingrese valor a ingresar: ";
    cin >> aux;
    cout <<endl<<"Ingrese posición a ingresar: ";
    cin >> pos;

    for (i=n;i>pos-1;i--) {        
            v[i]=v[i-1];
    };
    v[pos-1]=aux;
    cout<<endl<<"v[i] : [  ";
    for (i=0;i<n+1;i++){
        cout<<v[i]<<"  ";
    }
    cout << "]"<<endl;
    return 0;
}

