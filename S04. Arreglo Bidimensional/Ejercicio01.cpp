#include <iostream>
 
using namespace std;
 
int main()
{
    int m[3][4];// forma un arreglo de tamaño 10
    int i, j,aux;
    m[0][0]=11;
    m[0][1]=12;
    m[0][2]=13;
    m[0][3]=14;
    m[1][0]=21;
    m[1][1]=22;
    m[1][2]=23;
    m[1][3]=42;
    m[2][0]=31;
    m[2][1]=32;
    m[2][2]=33;
    m[2][3]=34;

    cout<<endl<<"m[i][j] : "<< endl;
    for (i=0;i<3;i++){
        cout<<"  [  " ;
        for (j=0;j<4;j++){
            cout<<m[i][j] << "  ";    
        }
        cout<<"] "<<endl;
    }

    //busqueda
    cout<<"Ingrese valor a buscar:";
    cin>>aux;
    for (i=0;i<3;i++){     
        for (j=0;j<4;j++){
            if (m[i][j] == aux){
                cout<<"El numero "<<m[i][j] << " se encuentra en la posicion ["<<i<<"]["<<j<<"]";
                break;
            }            
        }
    }
   
   
    return 0;
}