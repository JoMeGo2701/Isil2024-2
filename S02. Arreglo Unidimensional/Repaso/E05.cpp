
#include <iostream>

using namespace std;

int main(){
    int i;
    char nombres[5][29];
    int notas[5];
    
    //Lectura del vector
    for(i=0;i<5;i++){
        cout <<"Ingrese nombre ["<<(i+1)<<"]: ";
        cin>>nombres[i];
        cout <<"Ingrese nota de ["<<nombres[i]<<"]: ";
        cin>>notas[i];
    }
    //Mostrar elementos del vector
    
    for(i=0;i<5;i++){
        cout <<"["<<nombres[i]<<" : "<<notas[i]<<"]"<<endl;        
    }    

}