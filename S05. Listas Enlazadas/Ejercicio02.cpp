//LÍNEA ÚNICA

#include <iostream>
using namespace std;
 
// Un nodo de lista enlazada
class Node
{
  public:
    int key;        // campo de datos
    Node* next;     // puntero al siguiente nodo
};
 
// Función de utilidad para devolver un nuevo nodo de lista enlazada del heap
Node* newNode(int key, Node* next)
{
    // asignar un nuevo nodo en un heap y configurar sus datos
    Node* node = new Node;
    node->key = key;
 
    // establece el puntero `.next` del nuevo nodo para que apunte al actual
    // primer nodo de la lista.
    node->next = next;
 
    return node;
}
 
// Función para la implementación de listas enlazadas que contienen tres nodos
Node* constructList()
{
    Node* head = newNode(1, newNode(2, newNode(3, nullptr)));
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
    // `head` apunta al primer nodo (también conocido como nodo principal) de una lista enlazada
    Node *head = constructList();
 
    // imprimir lista enlazada
    printList(head);
 
    return 0;
}
