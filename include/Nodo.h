/**
 *  Autor: Daniel Ponce de León Súchil
 */

#include <iostream>
using namespace std;

class Nodo
{
public:
    Nodo(int dato);
    Nodo(int dato, Nodo *next);
    Nodo(Nodo *prev, int dato);
    Nodo(Nodo *prev, int dato, Nodo *next);
    int getDato();
    Nodo *getNext();
    Nodo *getPrev();
    void setDato(int dato);
    void setNext(Nodo *next);
    void setPrev(Nodo *prev);

private:
    int dato;
    Nodo *next;
    Nodo *prev;
};
