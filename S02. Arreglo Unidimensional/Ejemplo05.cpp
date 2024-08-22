#include <iostream>
 
using namespace std;
//programa que elimina un elemento de un vector unidimensional
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
    //En caso de hacer eliminación por valor:
    cout <<endl<<"Ingrese valor a eliminar: ";
    cin >> aux;
    for (i=0;i<n;i++) {
            if(v[i]==aux){
                pos = i;
                i = n ;
            }
    };
    /*
    En caso de hacer eliminación por posición:
    cout <<endl<<"Ingrese posición a eliminar: ";
    cin >> pos;    
    */
    for (i=pos;i<=n-1;i++){
        v[i]=v[i+1];
    }    
    n = n-1;
    cout<<endl<<"v[i] : [  ";
    for (i=0;i<n;i++){
        cout<<v[i]<<"  ";
    }
    cout << "]"<<endl;
    return 0;
}