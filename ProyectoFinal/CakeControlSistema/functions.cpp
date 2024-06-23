#include <iostream>
#include <string.h>
#include "variables.h"
#include <fstream>
#include <cstdlib>
using namespace std;

void catalogOptions();
void addItem();
void subtract();
void actualState();
void createReg();
void searchReg();

int menu()
{
    int op;
    cout << "!Bienvenido a CakeControl!\n";
    cout << "Menu de opciones:\n";
    cout << "1. Opciones del catálogo \n";
    cout << "2. Adición de ingredientes \n";
    cout << "3. Sustracción de ingredientes \n";
    cout << "4. Cantidad actual de ingredientes \n";
    cout << "5. Crear registro \n";
    cout << "6. Buscar registro \n";
    cout << "7. Salir \n";
    cout << "Opcion: ";
    cin >> op;
    return op;
}

void principal()
{
    int op;
    do
    {
        op = menu();
        switch (op)
        {
        case 1:
            catalogOptions();
            break;

        case 2:
            addItem();
            break;

        case 3:
            subtract();
            break;

        case 4:
            actualState();
            break;

        case 5:
            createReg();
            break;

        case 6:
            searchReg();
            break;

        case 7:
            cout << "Adios...\n";
            break;

        default:
            cout << "Solo son 7 opciones";
            break;
        }
    } while (op != 7);
}