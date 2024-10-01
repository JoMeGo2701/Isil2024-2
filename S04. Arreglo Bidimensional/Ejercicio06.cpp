#include <iostream>
 
using namespace std;

int main()
{
    int m[3][4];// forma un arreglo de tamaño 10
    int i, j,f,c, min, max, fmin,cmin,fmax,cmax;
    cout << "Ingrese num de filas: ";
    cin >> f;
    cout << "Ingrese num de columnas: ";
    cin >> c;
    

    //Leo datos para ingresar a la matriz   
    for (i=0;i<f;i++){        
        for (j=0;j<c;j++){
            cout <<"Ingrese M["<<(i+1)<<"]["<<(j+1)<<"]:";
            cin>>m[i][j];
            if(i==0 && j==0){
                min=max=m[i][j];
                fmin=cmin=i;
                fmax=cmax=i;
            }else{
                if(m[i][j]<min){
                    min=m[i][j];
                    fmin=i;
                    cmin=j;
                }
                if(m[i][j]>max){
                    max=m[i][j];
                    fmax=i;
                    cmax=j;
                }
            }           
            
        }
        cout <<endl;        
    }

    //mostrar matriz
    for (i=0;i<f;i++){
        cout << "[  ";
        for (j=0;j<c;j++){
            cout<<m[i][j]<<"  ";
        }
        cout << "]"<<endl;        
    }

    cout<<"Min ["<<(fmin+1)<<"]["<<(cmin+1)<<"]: "<< m[fmin][cmin]<<endl;
    cout<<"Max ["<<(fmax+1)<<"]["<<(cmax+1)<<"]: "<< m[fmax][cmax]<<endl;   

    return 0;
}