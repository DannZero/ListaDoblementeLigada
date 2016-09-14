/**
 *  Autor: Daniel Ponce de León Súchil
 */

#include "Nodo.h"

//CONSTRUCTORES
Nodo::Nodo(int dato)
{
    this->dato = dato;
    this->next = NULL;
    this->prev = NULL
}

Nodo::Nodo(int dato, Nodo *next)
{
    this->dato = dato;
    this->next = next;
    this->prev = NULL;
}

Nodo::Nodo(int dato, Nodo *prev)
{
    this->dato = dato;
    this->next = NULL;
    this->prev = prev;
}

Nodo::Nodo(int dato, Nodo *prev, Nodo *next)
{
    this->dato = dato;
    this->next = next;
    this->prev = prev;
}

//GETTERS
int Nodo::getDato()
{
    return this->dato;
}

Nodo *Nodo::getNext()
{
    return this->next;
}

Nodo *Nodo::getPrev()
{
    return this->prev;
}

//SETTERS
void Nodo::setDato(int dato)
{
    this->dato = dato;
}

void Nodo::setNext(Nodo *next)
{
    this->next = next;
}

void Nodo::setPrev(Nodo *prev)
{
    this->prev = prev;
}