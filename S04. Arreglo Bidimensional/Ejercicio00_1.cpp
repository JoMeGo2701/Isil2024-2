#include <iostream>
 
using namespace std;
//programa que ingresa por lugar=posicion-1
int main()
{    
    int i, j, f, c;
    cout<< "Ingrese numero filas: ";
    cin >>f;
    cout<< "Ingrese numero columnas: ";
    cin >>c; 
    int m[f][c];// forma una matriz de m fil x c col
    //Leo datos para ingresar a la matriz   
    for (i=0;i<f;i++){        
        for (j=0;j<c;j++){
            cout <<"Ingrese M["<<(i+1)<<"]["<<(j+1)<<"]:";
            cin>>m[i][j];
        }
        cout <<endl;        
    }
    
    cout<<endl<<"m[i][j] :"<< endl;

    //var i-> filas; var j->columnas
    for (i=0;i<f;i++){
        cout << "[  ";
        for (j=0;j<c;j++){
            cout<<m[i][j]<<"  ";
        }
        cout << "]"<<endl;        
    }    
    return 0;
}

