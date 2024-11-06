/*Insertar, Encolar y Desencolar*/
#include<iostream.h>
#include<conio.h>
struct nodo{ int nro;
             struct nodo*sgte;
           };
struct cola{
             struct nodo*adelante;
             struct nodo*atras;
             };
void iniciar(struct cola&);
void insertar(cola &cola1, cola &cola2, int n);
void encola(struct cola&, int);
int desencola(struct cola&);
void vercola(struct cola);
void main()
{int n,opc;
 struct cola q;
 struct cola r;
 iniciar(q);
 iniciar(r);
 do{
   cout<<"1. Insertar Elementos"<<endl;
   cout<<"2. Retirar Elementos "<<endl;
   cout<<"3. Ver Cola"<< endl;
   cout<<"4. Salir" <<endl;
   cout<<"Ingrese opcion:";
   cin>>opc;
   switch(opc)
   {
    case 1 : cout<<"Elementos:"<<endl;
             cin>>n;
             insertar(q,r,n);
             break;
    case 2: if(q.adelante!=NULL)
            {n=desencola(q);
            cout<<"Desencola elementos"<<endl;}
            else
            cout<<"No hay elementos en la cola"<<endl;
            break;
    case 3: cout<<"***Elementos de la cola***"<<endl;
            vercola(q);
            cout<<"***Elementos que se repiten***"<<endl;
            vercola(r);
            getch();
            break;
    }
    clrscr();
 }while(opc!=4);
}
void iniciar(struct cola&q)
{q.adelante=NULL;
 q.atras=NULL;
}
void insertar(cola &cola1,cola &cola2, int n)
{
 nodo *aux;
   bool conf=false;
 aux=cola1.adelante;
 while(aux!=NULL)
   {
    if(aux->nro==n)
      {
       conf=true;
         break;
      }
    aux=aux->sgte;
 }
   if(conf==false)
   {
    encola(cola1,n);
   }
   else
   {
    encola(cola2,n);
   }
}

void encola(struct cola &q, int n)
{
struct nodo *p;
p=new (struct nodo);
p->nro=n;
p->sgte=NULL;
if(q.adelante==NULL)
 q.adelante=p; //ingresa el primer elemento
else
 (q.atras)->sgte=p;// si no apunta a un nuevo nodo
q.atras=p;// la cola apunta al ultimo elemento recientemente ingresado
}

//ELIMINA ELEMENTOS EN LA COLA
int desencola(struct cola &q)
{
struct nodo *p;
p=q.adelante;// apunta al primer elemento
int n=p->nro;
q.adelante=(q.adelante)->sgte;
delete(p);
return n;
}

void vercola(struct cola q)
{
 struct nodo *p;
   p=q.adelante;// apunta al primer elementos
 while(p!=NULL)
   {
  cout<<p->nro<<endl;
  p=p->sgte;
 }
}