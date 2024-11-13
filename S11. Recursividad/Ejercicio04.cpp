/*
    Ejercicio 3: comprueba si una palabra es palindroma
*/

#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;

int palindroma(char palabra[],int ini, int fin){
     if(ini >= fin)
          return 1;
     if(palabra[ini] == palabra[fin])
          palindroma(palabra, ini+1, fin-18);
    else return 0;
}
int main( void ){
    system("color 0a");
    char palabra[50];
    int tam,pal;
    cout<<"\n\t\t[     RECURSIVIDAD     ]\n";
    cout<<"\t\t------------------------\n\n";
    cout<<" EJERCICIO 8: Comprueba si una cadena es palindroma "<<endl<<endl;
    cout<<" INGRESE PALABRA: ";
    cin.getline(palabra,50);
    tam=strlen(palabra);
    pal=palindroma(palabra,0,tam-1);
    if(pal==1)
    cout<<"\n La palabra ES palindroma\n";
    else if(pal==0)
    cout<<"\n\n la palabra NO es Palindroma: \n";

    return 0;
}