#include <iostream>
#include <conio.h>

using namespace std;
//INSERCION AL INICIO DEL VECTOR
int main(){
    int i,aux;    
    int vector[5];
    
    //Lectura del vector
    for(i=0;i<5;i++){
        cout <<"Ingrese elemento ["<<(i+1)<<"]: ";
        cin>>vector[i];        
    }
    
    //Mostrar elementos del vector
    cout <<"vector: [  ";
    for(i=0;i<5;i++){
        cout <<vector[i]<<"  ";        
    }
    cout <<"]"<<endl;

    cout <<"Ingrese nuevo valor: ";
    cin >> aux;
    
    //corre una posición a la derecha, todo el vector
    for(i=5;i>0;i--){
        vector[i]=vector[i-1];
    }
    vector[0]=aux;
    
    //Mostrar elementos del vector
    cout <<"vector: [  ";
    for(i=0;i<6;i++){
        cout <<vector[i]<<"  ";        
    }
    cout <<"]";
    getch();
    return 0;
}