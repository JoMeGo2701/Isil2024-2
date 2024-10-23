//PUNTERO PRINCIPAL - GLOBAL

#include <iostream>
#include <vector>
using namespace std;
 
// Un nodo de lista enlazada
class Node
{
  public:
    int key;
    Node* next;
};
 
// Puntero de cabeza global
Node* head = nullptr;
 
// Toma una lista y un valor de datos, crea un nuevo enlace con el dado
// datos y los empuja al frente de la lista.
void push(int key)
{
    // asignar un nuevo nodo en un heap y configurar sus datos
    Node* node = new Node;
    node->key = key;
 
    // establece el puntero `.next` del nuevo nodo para que apunte al actual
    // nodo principal de la lista.
    node->next = head;
 
    // cambia el puntero principal para que apunte al nuevo nodo, para que sea
    // ahora el primer nodo de la lista.
    head = node;
}
 
// Función para la implementación de listas enlazadas a partir de un conjunto dado de claves
void constructList(vector<int> const &keys)
{
    // comienza desde el final de la array
    for (int i = keys.size() - 1; i >= 0; i--) {
        push(keys[i]);
    }
}
 
// Función auxiliar para imprimir la lista enlazada global `head`
void printList()
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
    constructList(keys);
 
    // imprimir lista enlazada
    printList();
 
    return 0;
}