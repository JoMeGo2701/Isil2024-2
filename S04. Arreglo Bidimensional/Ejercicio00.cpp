#include <iostream>
 
using namespace std;
//programa que ingresa por lugar=posicion-1
int main()
{
    int m[3][3];// forma una matriz de 3 fil x 3 col
    int i, j;
    m[0][0]=10;
    m[0][1]=11;
    m[0][2]=12;
    m[1][0]=20;
    m[1][1]=21;
    m[1][2]=22;
    m[2][0]=30;
    m[2][1]=31;
    m[2][2]=32;
    
    cout<<endl<<"m[i][j] :"<< endl;

    //var i-> filas; var j->columnas
    for (i=0;i<3;i++){
        cout << "[  ";
        for (j=0;j<3;j++){
            cout<<m[i][j]<<"  ";
        }
        cout << "]"<<endl;        
    }    
    return 0;
}

