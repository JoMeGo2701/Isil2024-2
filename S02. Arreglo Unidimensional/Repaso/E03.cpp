#include <iostream>

using namespace std;
//N ELEMENTOS EN VECTOR
int main(){
    int i,n;
    cout <<"Ingrese tamaño del arreglo: ";
    cin >>n;
    int vector[n-1];
    //Lectura del vector
    for(i=0;i<n;i++){
        cout << "Ingrese numero ["<<(i+1)<<"]: ";
        cin >> vector[i];
    }
    //Mostrar elementos del vector
    cout <<"vector: [  ";
    for(i=0;i<n;i++){
        cout <<vector[i]<<"  ";        
    }
    cout <<"]";
}