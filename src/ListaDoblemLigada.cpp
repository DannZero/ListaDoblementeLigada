/**
 *	Autor: Daniel Ponce de León Súchil
 */

#include "ListaDoblemLigada.h"

//CONSTRUCTORES
ListaDoblemLigada::ListaDoblemLigada()
{
    this->h = NULL;
	this->t = NULL;
}

ListaDoblemLigada::ListaDoblemLigada(int dato)
{
    Nodo *n = new Nodo(dato);
	this->h = n;
	this->t = n;
}

bool ListaDoblemLigada::isEmpty()
{
	return (this->h == NULL && this->t == NULL);
}

void ListaDoblemLigada::vaciar()
{
    this->h = NULL;
	this->t = NULL;
}

void ListaDoblemLigada::show()
{
    if (this->isEmpty())
	{
		cout << "La lista está vacía." << endl;
		return;
	}
	cout << "[ ";
	for (Nodo *n = this->h ; n != this->t ; n = n->getNext())
	{
		cout << n->getDato() << " <-> ";
	}
	cout << this->t->getDato() << " ]" << endl;
}

void ListaDoblemLigada::pushInicio(int dato)
{
    Nodo *n = new Nodo(dato, h);
	if (this->isEmpty())
	{
		t = n;
	}
    h->setPrev(n);
    h = n;
}

void ListaDoblemLigada::pushFinal(int dato)
{
    Nodo *n = new Nodo(t , dato);
    if (this->isEmpty())
    {
        h = n;
    }
    t->setNext(n);
    t = n;
}

//  Agrega el dato entre -(ref - 1)- y -ref-
void ListaDoblemLigada::pushAt(int dato, int ref)
{
    if (ref <= 0)
    {
        if (ref < 0)
        {
            cout << "Referencia inválida, agregando al inicio..." << endl;
        }
        pushInicio(dato);
		return;
    }
    if (!this->isEmpty())
    {
        Nodo *n = h;
        for (int i = 0; i < ref ; ++i)
		{
			if (n == t)
			{
				cout << "El tamaño de la lista es menor, se agregará al final..." << endl;
				this->pushFinal(dato);
				return;
			}
			n = n->getNext();
		}
        Nodo *a = new Nodo(n->getPrev(), dato, n->getNext());
        n->getPrev()->setNext(a);
        n->getNext()->setPrev(a);
        return;
    }
    cout << "La lista está vacía, se agregará el dato al inicio..." << endl;
	this->pushInicio(dato);
}

int ListaDoblemLigada::popInicio()
{
    if (this->isEmpty())
	{
		cout << "La lista está vacía." << endl;
		return 0;
	}
	int dato = h->getDato();
	if (h == t)
	{
		h == NULL;
		t == NULL;
	}
	else
	{
		h = h->getNext();
        h->setPrev(NULL);
	}
	return dato;
}

int ListaDoblemLigada::popFinal()
{
    if (this->isEmpty())
	{
		cout << "La lista está vacía." << endl;
		return 0;
	}
    int dato = t->getDato();
    if (h == t)
    {
        h == NULL;
        t == NULL;
    }
    else
    {
        t = t->getPrev();
        t->setNext(NULL);
    }
    return dato;
}

/**
 *  Regresa el elemento en -ref- y recorre los posteriores
 *  en -1
 */ 
int ListaDoblemLigada::popAt(int ref)
{
    if (ref <= 0)
	{
		if (ref < 0)
		{
			cout << "Referencia inválida, retirando al inicio..." << endl;
		}
		return popInicio();
	}
    if (this->isEmpty())
	{
		cout << "La lista está vacía." << endl;
		return 0;
	}
    Nodo *n = this->h;
	for (int i = 0 ; i < ref ; ++i)
	{
		if (n == t)
			{
				cout << "El tamaño de la lista es menor, se eliminará el último elemento..." << endl;
				return popFinal();
			}
		n = n->getNext();
	}
    int dato = n->getDato();
    n->getPrev()->setNext(n->getNext());
    n->getNext()->setPrev(n->getPrev());
    n = NULL;
    return dato;
}

//BUSQUEDA 
Nodo *ListaDoblemLigada::getElement(int dato)
{
    if (this->isEmpty())
    {
        cout << "La lista está vacía." << endl;
		return NULL;
    }
    Nodo *n = h;
    while (n->getDato() != dato && n != t)
    {
        n = n->getNext();
    }
    if (n->getDato() == dato)
    {
        return n;
    }
    cout << "No existe el elemento." << endl;
    return NULL;
}

//GETTERS
Nodo *ListaDoblemLigada::getH()
{
    return this->h;
}

Nodo *ListaDoblemLigada::getT()
{
    return this->t;
}