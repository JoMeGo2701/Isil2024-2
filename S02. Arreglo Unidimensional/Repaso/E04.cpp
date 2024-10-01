#include <iostream>

using namespace std;
//N ELEMENTOS EN VECTOR
int main(){
    int i;    
    char vector[4];
    //Lectura del vector
    for(i=0;i<=4;i++){
        cout << "Ingresa vocal ["<<(i+1)<<"]: ";
        cin >> vector[i];
    }
    //Mostrar elementos del vector ascendente    
    cout <<"vector Asc: [  ";
    for(i=0;i<=4;i++){
        cout <<vector[i]<<"  ";        
    }
    cout <<"]"<<endl;

    //Mostrar elementos del vector descendente
    cout <<"vector Desc: [  ";
    for(i=4;i>=0;i--){
        cout <<vector[i]<<"  ";        
    }
    cout <<"]";
}