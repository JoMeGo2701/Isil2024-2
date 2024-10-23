
//SOLUCIÓN ESTANDAR

#include <iostream>
#include <vector>
using namespace std;
 
// Un nodo de lista enlazada
class Node
{
  public:
    int key;        // campo de datos
    Node* next;     // puntero al siguiente nodo
};
 
/*
    push() en C++ — simplemente agregamos `&` al lado derecho de la cabeza
    tipo de parámetro, y el compilador hace que ese parámetro funcione por referencia.
    Por lo tanto, este código cambia la memoria de la persona que llama, pero no se requieren usos adicionales de `*`.
    necesario: accedemos a "head" directamente, y el compilador lo hace
    cambiar la referencia de nuevo a la persona que llama.
*/
void push(Node* &headRef, int key)
{
    // asignar un nuevo nodo en un heap y configurar sus datos
    Node* node = new Node;
    node->key = key;
 
    // establece el puntero `.next` del nuevo nodo para que apunte al actual
    // primer nodo de la lista.
 
    // no es necesario el uso extra de `*` en el encabezado — el compilador
    // se encarga de eso detrás de escena
    node->next = headRef;
 
    // cambia el puntero principal para que apunte al nuevo nodo, para que sea
    // ahora el primer nodo de la lista.
    headRef = node;
}
 
// Función para la implementación de listas enlazadas a partir de un conjunto dado de claves
Node* constructList(vector<int> const &keys)
{
    Node* head = nullptr;
 
    // comienza desde el final de la array
    for (int i = keys.size() - 1; i >= 0; i--)
    {
        // Tenga en cuenta que no es necesario un uso adicional de `&`: el compilador toma
        // cuídalo aquí también. Estas llamadas están cambiando la cabeza.
 
        push(head, keys[i]);
    }
 
    return head;
}
 
// Función auxiliar para imprimir una lista enlazada
void printList(Node* head)
{
    Node* ptr = head;
    while (ptr)
    {
        cout << ptr->key << " -> ";
        ptr = ptr->next;
    }
 
    cout << "nullptr";
}
 
int main()
{
    // teclas de entrada (en orden inverso)
    vector<int> keys = { 4, 3, 2, 1 };
 
    // construir lista enlazada
    Node *head = constructList(keys);
 
    // imprimir lista enlazada
    printList(head);
 
    return 0;
}
