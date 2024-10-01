#include <iostream>
#include <conio.h>

using namespace std;
//BUSQUEDA SECUENCIAL EN UN VECTOR
int main(){
    int i,aux;    
    int vector[5];
    
    //Lectura del vector
    for(i=0;i<5;i++){
        cout <<"Ingrese elemento ["<<(i+1)<<"]: ";
        cin>>vector[i];        
    }    
    cout <<"]"<<endl;

    //Mostrar elementos del vector
    cout <<"vector: [  ";
    for(i=0;i<5;i++){
        cout <<vector[i]<<"  ";        
    }
    cout <<"]"<<endl;

    cout <<"Ingrese valor a buscar: ";
    cin >> aux;
    vector[5]=aux;

    //Busca el elemento en el vector y devuelve posición    
    for(i=0;i<5;i++){
        if(vector[i]==aux){
            cout << "Encontrado en la Posición: "<< i;    
            break;
        }        
    }
    if(i==5){
        cout << "No Encontrado";      
    }                
    return 0;

}