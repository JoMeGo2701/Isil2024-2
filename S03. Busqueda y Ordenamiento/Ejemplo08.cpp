#include <iostream>
 
using namespace std;

int n,aux; 
//Metodo ordenamiento Burbuja - vector
void BubleSort(int w[],int n){
    int i,j,aux;
    for (i=0;i<n;i++){
        for (j=i+1;j<n;j++){
            if(w[i]>w[j]){
                aux=w[i];
                w[i]=w[j];
                w[j]=aux;
            }
        }    
    }
};

//Metodo ordenamiento Seleccion Directa - vector
void DirectSelection(int w[],int n){
    int i,j,min,pos_min;
    for(i=0;i<n;i++){
        min = w[i];
        pos_min = i;
        for(j=i;j<n;j++){
            if(w[j]<min){
                min=w[j];                
                pos_min=j;
            }
        }
        w[pos_min]=w[i];
        w[i]=min;            
    }
};

//Metodo ordenamiento Rapido - vector
void QuickSort(int vv[],int n,int iz,int de){
    int i,j,x,w;
    i = iz;
    j = de;
    x = vv[(iz+de)/2];
    do{
        while(vv[i]<x) i++;
        while(x<vv[j]) j--;
        if(i<=j){
            w=vv[i];
            vv[i]=vv[j];
            vv[j]=w;
            i++;
            j--;
        }
    }while(i<=j);
    w = vv[i];
    vv[i]=vv[de];
    vv[de]=w;
    if(iz<j) QuickSort(vv,n,iz,j);
    if(i<de) QuickSort(vv,n,i,de);
    
};

int main()
{
    int v[10],i;
    v[0]=2;
    v[1]=5;
    v[2]=7;
    v[3]=4;
    v[4]=8;
    v[5]=0;
    v[6]=3;
    v[7]=1;
    v[8]=6;
    v[9]=9;
    cout<<endl<<"v[i] : [  ";
    for (i=0;i<10;i++){
        cout<<v[i]<<"  ";
    }
    cout << "]"<<endl;
    //BubleSort(v,10);
    //DirectSelection(v,10);
    QuickSort(v,10,0,9);
    cout<<endl<<"v[i] : [  ";
    for (i=0;i<10;i++){
        cout<<v[i]<<"  ";
    }
    cout << "]"<<endl;
    return 0;
}