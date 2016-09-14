/**
 *	Autor: Daniel Ponce de León Súchil
 */

#include "Nodo.h"

class ListaDoblemLigada
{
public:
    ListaDoblemLigada();
    ListaDoblemLigada(int dato);
    bool isEmpty();
    void vaciar();
    void show();
    //Push
    void pushInicio(int dato);
    void pushFinal(int dato);
    void pushAt(int dato, int ref);
    //Pop
    int popInicio();
    int popFinal();
    int popAt(int ref);
    //Getters
    Nodo *getH();
    Nodo *getT();
    //Busqueda
    Nodo *getElement(int dato);

private:
    Nodo *h;
    Nodo *t;
};