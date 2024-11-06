/* Ingresar y Leer Cola*/

#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<alloc.h>
#include<conio.h>

struct _nodo {int  valor;
             struct _nodo *sig;
             };

typedef struct _nodo *pNodo;
void anadir(pNodo *pri,pNodo *ult,int v);
int leer(pNodo*pri,pNodo *ult);

int main()
{
pNodo pri =NULL,ult=NULL ;
 int op;
 char resp='s';
 int va;
 do{
 clrscr();

gotoxy(10,7);cout<<"***MENU***"<<endl;
gotoxy(10,9);cout<<"[1] Ingresar \n";
gotoxy(10,10);cout<<"[2] Leer\n";
gotoxy(10,11);cout<<"Eliga opcion:[ ]";
gotoxy(24,11);cin>>op;
cout<<endl;

switch(op)
{
case 1: cout<<"anadir elemento : ";
        cin>>va;
        anadir(&pri,&ult,va);
        break;

case 2: cout<<"leer elemento :";
        cout<<leer(&pri,&ult);
        break;
  }

  cout<<endl;
 do{ cout<<"desea continuar[s/n]: ";
   cin>>resp;
     cout<<endl;
   }while(resp!='s'&& resp!='n');
 }while(resp=='s');
  cout<<endl;
 getchar();
 return 0;
}

/***************************************************************/
void anadir(pNodo *pri,pNodo *ult,int v)
{
pNodo nuevo;
nuevo =(pNodo)malloc(sizeof(_nodo));
nuevo->valor=v;
nuevo->sig=NULL;
if(*ult)(*ult)->sig=nuevo;
*ult=nuevo;
if(!*pri)*pri=nuevo;
}

/**************************************************************/
int leer(pNodo*pri,pNodo *ult)
{
 pNodo nodo;
 int v;
 nodo=*pri;
if(!nodo) return 0;
*pri=nodo->sig;
v =nodo->valor;
free(nodo);
if(!*pri ) *ult = NULL;
return v;
}