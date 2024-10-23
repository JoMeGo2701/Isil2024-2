//MÉTODO INGENUO

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
Node* newNode(int key)
{
    // asignar un nuevo nodo en un heap y configurar sus datos
    Node* node = new Node;
    node->key = key;
 
    // El puntero `.next` del nuevo nodo no apunta a nada
    node->next = nullptr;
 
    return node;
}
 
// Función para la implementación de listas enlazadas que contienen tres nodos
Node* constructList()
{
    // construye tres nodos de lista enlazados
    Node* first = newNode(1);
    Node* second = newNode(2);
    Node* third = newNode(3);
 
    // reorganizar los punteros para construir una lista
    Node* head = first;
    first->next = second;
    second->next = third;
 
    // devuelve un puntero al primer nodo de la lista
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
