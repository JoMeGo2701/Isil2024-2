#include <iostream>
 
using namespace std;
 
int main()
{
    int m[3][4];// forma un arreglo de tamaño 10
    int i, j,n;
    cout << "Ingrese num de filas y columnas: ";
    cin >> n;

    //Leo datos para ingresar a la matriz   
    for (i=0;i<n;i++){        
        for (j=0;j<n;j++){
            cout <<"Ingrese M["<<(i+1)<<"]["<<(j+1)<<"]:";
            cin>>m[i][j];
        }
        cout <<endl;        
    }

    //mostrar matriz
    for (i=0;i<n;i++){
        cout << "[  ";
        for (j=0;j<n;j++){
            cout<<m[i][j]<<"  ";
        }
        cout << "]"<<endl;        
    }    
    
    //diagonal principal    
    cout << "Diagonal principal: [  ";
    for (i=0;i<n;i++){                         
        cout<<m[i][i] << "  ";        
    }
    cout << "]"<<endl; 
   
   //diagonal secundaria
    cout << "Diagonal secundaria: [  ";
    for (i=0;i<n;i++){                         
        cout<<m[n-1-i][i] << "  ";        
    }
    cout << "]"<<endl; 

    return 0;
}