#include <iostream>

using namespace std;
//5 PRIMEROS MULTIPLOS DE 2
int main(){
    int i;
    int vector[4];   
    //Lectura del vector
    for(i=0;i<=4;i++){
        //cout <<"Ingrese numero ["<<(i+1)<<"]: ";
        vector[i]=(i+1)*2;
    }
    //Mostrar elementos del vector
    cout <<"vector: [  ";
    for(i=0;i<=4;i++){
        cout <<vector[i]<<"  ";        
    }
    cout <<"]";

}