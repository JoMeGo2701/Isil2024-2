/*Buscar, vaciar y desencolar cola*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void inicializa(struct cola&);
void encola(struct cola&,int);
void verCola(struct cola);
void vaciaCola(struct cola&);
int buscar(struct cola&,int);
int desencola(struct cola&);
struct nodo{
           int nro;
           struct nodo*sgte;
           };
struct cola{
           struct nodo*delante;
           struct nodo*atras;
           };
void main(void)
{
int opc;
struct cola q;
int n,ele;
inicializa(q);
do{
  cout<<endl<<"-----MENU-----"<<endl;
  cout<<"1.Encolar elemento"<<endl;
  cout<<"2.Desencolar elemento"<<endl;
  cout<<"3.Visualizar cola"<<endl;
  cout<<"4.Vaciar cola"<<endl;
  cout<<"5. Buscar"<<endl;
  cout<<"6.Salir"<<endl;
  cout<<"Ingrese opcion = ";cin>>opc;

switch(opc)
 {
 case 1:cout<<endl<<"Encolar elemento = ";cin>>n;
 encola(q,n);
 break;
 case 2:if(q.delante!=NULL)
        {
        n=desencola(q);
        cout<<endl<<"Desencola elemento = "<<n<<endl;
        }
        else cout<<endl<<"No hay elementos en la cola"<<endl;
        break;
 case 3:cout<<endl<<"Elemento de la cola = "<<endl;
        verCola(q);
        break;
 case 4:vaciaCola(q);
        break;
  case 5:cout<<"elemento que desea buscar:";
         cin>>ele;
         if(buscar(q,ele)==1)
          cout<<"elemento encontrado.n";
         else
           cout<<"elemento no encontrado.n";
        break;
 }
 }while(opc!=6);
}
void inicializa(struct cola&q)
{
q.delante=NULL;
q.atras=NULL;
}
void encola(struct cola&q,int n)
{
struct nodo*p;
p=new(struct nodo);
p->nro=n;
p->sgte=NULL;
if(q.delante==NULL)
 q.delante=p;
else(q.atras)->sgte=p;
 q.atras=p;
}
int desencola(struct cola&q)
{
struct nodo*p;
p=q.delante;
int n=p->nro;
q.delante=(q.delante)->sgte;
delete(p);
return n;
}
void vaciaCola(struct cola&q)
{
struct nodo*p,*r;
p=q.delante;
while(p!=NULL)
 {
 r=p;
 p=p->sgte;
 delete(r);
 }
 q.delante=NULL;
 q.atras=NULL;
}
void verCola(struct cola q)
{
struct nodo*p;
p=q.delante;
while(p!=NULL)
 {
 cout<<p->nro<<endl;
 p=p->sgte;
 }
}
int buscar(struct cola&q, int ele)
{int k=1;
while(q.delante!=NULL)
{
 if(q.delante!=NULL)
 {
 printf("POSICION DEL ELEMENTO %i", k); cout<<endl;
 return 1;
 }
 q.delante=q.delante->sgte;
 k++;
 }
 return 0;
}