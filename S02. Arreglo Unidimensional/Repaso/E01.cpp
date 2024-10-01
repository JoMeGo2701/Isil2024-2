
#include <iostream>

using namespace std;

int main(){
    int i;
    int vector[4];   
    //Lectura del vector
    for(i=0;i<=4;i++){
        cout <<"Ingrese numero ["<<(i+1)<<"]: ";
        cin>>vector[i];
    }
    //Mostrar elementos del vector
    cout <<"vector: [  ";
    for(i=0;i<=4;i++){
        cout <<vector[i]<<"  ";        
    }
    cout <<"]";

}