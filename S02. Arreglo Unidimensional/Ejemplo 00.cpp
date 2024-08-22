#include <iostream>
 
using namespace std;
 
int main()
{
    int sqrs[10];// forma un arreglo de tamaño 10
    int i;
 
    for (i=1;i<11;i++) {
        sqrs[i-1]=i*i;
    }// un ciclo for para ir aumentando el numero que elevaremos al cuadrado y definir la operación.
 
    for (i=0;i<10;i++) {
        cout<<sqrs[i]<<endl;
    }//aumento de posición del índice del arreglo.
    
    return 0;
}