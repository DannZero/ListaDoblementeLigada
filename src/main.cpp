/**
 *	Autor: Daniel Ponce de León Súchil
 */

#include "ListaDoblemLigada.h"
using namespace std;

int main()
{
    int opc, a, b;
    ListaDoblemLigada l = ListaDoblemLigada();
    do
    {
        cout << "1. pushInicio" << endl;
        cout << "2. pushFinal" << endl;
        cout << "3. pushAt" << endl;
        cout << "4. popInicio" << endl;
        cout << "5. popFinal" << endl;
        cout << "6. popAt" << endl;
        cout << "7. vaciar" << endl;
        cout << "8. getElement" << endl;
        cout << "9. show" << endl << endl;
        cout << "0. Salir del Programa..." << endl;
        cin >> opc;
        switch (opc)
        {
        case 1:
            cout << "Ingrese el dato: ";
            cin >> a;
            l.pushInicio(a);
            break;
        case 2:
            cout << "Ingrese el dato: ";
            cin >> a;
            l.pushFinal(a);
            break;
        case 3:
            cout << "Ingrese el dato: ";
            cin >> a;
            cout << "Ingrese la referencia (comienza en 0): ";
            cin >> b;
            l.pushAt(a, b);
            break;
        case 4:
            cout << l.popInicio() << endl;
            break;
        case 5:
            cout << l.popFinal() << endl;
            break;
        case 6:
            cout << "Ingrese la referencia (comienza en 0): ";
            cin >> a;
            l.popAt(a);
            break;
        case 7:
            l.vaciar();
            break;
        case 8:
            cout << "Ingrese el dato del nodo a obtener: ";
            cin >> a;
            cout << "Nodo obtenido: " << l.getElement(a) << endl;
            break;
        case 9:
            l.show();
            break;
        case 0:
            break;
        default:
            cout << "Opción inválida." << endl;
        }
    } while (opc != 0);
    return 0;
}
