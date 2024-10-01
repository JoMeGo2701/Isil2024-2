#include <iostream>
 
using namespace std;
//programa que ingresa por lugar=posicion-1
int main()
{
    int i, j, f, c;
    cout<<endl<<"cuantas columnas quieres que tenga la matriz?"<<endl;
    cin>> c;
    cout<<endl<<"cuantas filas quieres que tenga la matriz?"<<endl;
    cin>> f;
    int m[f][c];
    cout<<endl<<"m[i][j] :"<<endl;
    // var i-> filas; var j->columnas
    for (i=0;i<f;i++){
        cout << "Ingrese M["<<(i+1)<<"]["<<(j+1)<<"]:";
        for(j=0;j<c;j++){
            cin>>m[i][j];
        }
        cout <<endl;
    }
    
    cout<<endl<<"m[i][j] :"<<endl;
    // var i-> filas; var j->columnas
    for (i=0;i<3;i++){
        cout << "[ ";
        for(j=0;j<3;j++){
            cout<<m[i][j]<<" ";
        }
        cout << "]"<<endl;
    }
}