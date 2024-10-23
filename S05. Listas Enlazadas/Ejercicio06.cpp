//RETORNAR LA CABEZA DEL PUSH()

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
    Toma una lista y un valor de datos, crea un nuevo enlace con los datos dados
    y lo empuja al frente de la lista.
*/
Node* push(Node* head, int key)
{
    // asignar un nuevo nodo en un heap y configurar sus datos
    Node* node = new Node;
    node->key = key;
 
    // establece el puntero `.next` del nuevo nodo para que apunte al actual
    // primer nodo de la lista.
    node->next = head;
 
    // devuelve el nuevo nodo, por lo que se convierte en el primer nodo de la lista
    return node;
}
 
// Función para la implementación de listas enlazadas a partir de un conjunto dado de claves
Node* constructList(vector<int> const &keys)
{
    Node* head = nullptr;
 
    // comienza desde el final de la array
    for (int i = keys.size() - 1; i >= 0; i--) {
        head = push(head, keys[i]);        // actualice el encabezado aquí
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
