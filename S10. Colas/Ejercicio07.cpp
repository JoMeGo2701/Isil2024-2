/*Encolar y desencolar un listado de clientes*/
#include<iostream.h>
#include<conio.h>
struct nodo{
            char nombre[20];
            char gen;
            struct nodo*sgte;
            };
struct cola{
            struct nodo*adelante;
            struct nodo*atras;
            };
void inicializar(struct cola&);
void encola(struct cola&, struct nodo);
struct nodo(desencola(struct cola&));
void vercola(struct cola);
void main()
{int n,i;
struct nodo cte;
struct cola q;
struct cola qh;
struct cola qm;
inicializar(q);
inicializar(qh);
inicializar(qm);
cout<<"Numero de clientes:";
cin>>n;
for(i=0;i<n;i++)
{cout<<"Nombre   :"; cin>>cte.nombre;
 cout<<"Género [M/F]:"; cin>>cte.gen;
 encola(q,cte);
}
cout<<"***Cola Original***"<<endl;
vercola(q);
while(q.adelante!=NULL)
{cte=desencola(q);
 if(cte.gen=='M'|| cte.gen=='m')
 encola(qh,cte);
 else
 encola(qm,cte);
}
cout<<"***Cola de Hombres***"<<endl;
vercola(qh);
cout<<"***Cola de Mujeres***"<<endl;
vercola(qm);
getch();
}
void inicializar(struct cola&q)
{ q.adelante=NULL;
  q.atras=NULL;
}
void encola(struct cola&q, struct nodo cte)
{struct nodo *p;
 p=new(struct nodo);
 *p=cte;
  p->sgte=NULL;
     if(q.adelante==NULL)
     q.adelante=p;
     else (q.atras)->sgte=p;
     q.atras=p;
}
struct nodo desencola(struct cola&q)
{ struct nodo *p;
   p=q.adelante;
     struct nodo n=*p;
     q.adelante=(q.adelante)->sgte;
     delete(p);
     return n;
    }
void vercola(struct cola q)
{
 struct nodo*p;
       p=q.adelante;
       while(p!=NULL)
       {cout<<p->nombre<<endl;
        p=p->sgte;
       }
       cout<<endl;
 }