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

void catalogOptions1();
void catalogOptions2();
void catalogOptions3();
void catalogOptions3a1();
void catalogOptions3a2();

void cargarIngredientes();
void guardarIngredientes();

int menu()
{
    int op;
    system("cls||clear");
    cout << "!Bienvenido a CakeControl!\n";
    cout << "Menu de opciones:\n";
    cout << "1. Opciones del catálogo \n";
    cout << "2. Adición de ingredientes \n";
    cout << "3. Sustracción de ingredientes \n";
    cout << "4. Cantidad actual de ingredientes \n";
    cout << "5. Crear registro \n";
    cout << "6. Buscar registro \n";
    cout << "7. Actualizar ingredientes actuales \n";
    cout << "8. Salir \n";
    cout << "Opcion (1-8): ";
    cin >> op;
    return op;
}

void principal()
{
    cargarIngredientes();
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
            break;

        case 3:
            break;

        case 4:
            actualState();
            break;

        case 5:
            break;

        case 6:
            break;

        case 7:
            guardarIngredientes();
            break;

        case 8:
            cout << "Adios...\n";
            break;

        default:
            cout << "Solo son 8 opciones";
            break;
        }
    } while (op != 8);
}

void catalogOptions()
{
    int op;
    system("cls||clear");
    cout << "|-OPCIONES DEL CATÁLOGO-|" << endl;
    cout << endl;
    cout << "-OPCIONES-" << endl;
    cout << endl;
    cout << "1. Tortas personalizadas" << endl;
    cout << "2. Cupcakes de frutas" << endl;
    cout << "3. Otros" << endl;
    cout << endl;
    cout << "¿Qué desea preparar? (Opción 1, 2 o 3)" << endl;
    cout << "Opcion: ";
    cin >> op;

    switch (op)
    {
    case 1:
        catalogOptions1();
        break;

    case 2:
        catalogOptions2();
        break;

    case 3:
        catalogOptions3();
        break;

    default:
        cout << "Opcion no valida." << endl;
        catalogOptions();
        break;
    }
}

void catalogOptions1()
{
    int op;
    system("cls||clear");
    cout << "Tamaño: (1) 0.25 libras, (2) 0.5 libras o (3) 1 libras" << endl;
    cout << "Opcion: ";
    cin >> op;
    switch (op)
    {
    case 1:
        tamano = 0.25;
        break;

    case 2:
        tamano = 0.5;
        break;

    case 3:
        tamano = 1;
        break;

    default:
        cout << "Opcion no valida" << endl;
        catalogOptions1();
        break;
    }

    cout << endl;

    cout << "Sabor: (1) Chocolate o (2) Vainilla" << endl;
    cout << "Opcion: ";
    cin >> op;
    switch (op)
    {
    case 1:
        curitems.extractoChocolate -= 0.015 * tamano;
        break;

    case 2:
        curitems.extractoVainilla -= 0.015 * tamano;
        break;

    default:
        cout << "Opcion no valida" << endl;
        catalogOptions1();
        break;
    }

    cout << endl;

    cout << "Relleno: (1) Dulce de leche o (2) Leche condensada" << endl;
    cout << "Opcion: ";
    cin >> op;
    switch (op)
    {
    case 1:
        curitems.dulceLeche -= 0.12 * tamano;
        break;

    case 2:
        curitems.lecheCondensada -= 0.12 * tamano;
        break;

    default:
        cout << "Opcion no valida" << endl;
        catalogOptions1();
        break;
    }

    cout << endl;

    cout << "Mermeladas: (1) Fresa, (2) Piña y (3) Frutos Rojos" << endl;
    cout << "Opcion: ";
    cin >> op;
    switch (op)
    {
    case 1:
        curitems.fresa -= 0.55 * tamano;
        break;

    case 2:
        curitems.pina -= 0.55 * tamano;
        break;

    case 3:
        curitems.frutosRojos -= 0.55 * tamano;
        break;

    default:
        cout << "Opcion no valida" << endl;
        catalogOptions1();
        break;
    }

    curitems.harina -= 0.42;
    curitems.azucar -= 0.6;
    curitems.huevos -= 4;
    curitems.mantequilla -= 0.07;
    curitems.levadura -= 0.012;
    curitems.empaques -= 1;

    cout << endl;

    cout << "El proceso se ha realizado con exito" << endl;

    cout << endl;

    system("pause");
}

void catalogOptions2()
{
    int op;
    system("cls||clear");
    cout << "Cantidad: (1) Individual, (2) Combo X4 o (3) Ramo de 7" << endl;
    cout << "Opcion: ";
    cin >> op;
    switch (op)
    {
    case 1:
        cantidad = 1;
        break;

    case 2:
        cantidad = 4;
        break;

    case 3:
        cantidad = 7;
        break;

    default:
        cout << "Opcion no valida" << endl;
        catalogOptions2();
        break;
    }

    cout << endl;

    cout << "Sabores: (1) Fresa, (2) Mora, (3) Cereza y (4) Mango" << endl;
    cout << "Opcion: ";
    cin >> op;
    switch (op)
    {
    case 1:
        curitems.fresa -= 0.5 * cantidad;
        break;

    case 2:
        curitems.mora -= 0.5 * cantidad;
        break;

    case 3:
        curitems.cereza -= 0.5 * cantidad;
        break;

    case 4:
        curitems.mango -= 0.5 * cantidad;
        break;

    default:
        cout << "Opcion no valida" << endl;
        catalogOptions2();
        break;
    }

    cout << endl;

    curitems.harina -= 0.42;
    curitems.azucar -= 0.6;
    curitems.huevos -= 4;
    curitems.mantequilla -= 0.07;
    curitems.levadura -= 0.012;
    curitems.empaques -= 1;

    cout << "El proceso se ha realizado con exito" << endl;

    cout << endl;

    system("pause");
}

void catalogOptions3()
{
    int op;
    system("cls||clear");
    cout << "(1) Galletas y (2) Pastel de Tres Leches" << endl;
    cout << "Opcion: ";
    cin >> op;
    cout << endl;
    switch (op)
    {
    case 1:
        catalogOptions3a1();
        break;

    case 2:
        catalogOptions3a2();
        break;

    default:
        cout << "Opcion no valida" << endl;
        catalogOptions3();
        break;
    }
}

void catalogOptions3a1()
{
    cout << "¿Cuántas galletas serán?" << endl;
    cin >> cantidad;

    curitems.harina -= 0.300 * cantidad;
    curitems.azucar -= 0.6 * cantidad;
    curitems.huevos -= 2 * cantidad;
    curitems.mantequilla -= 0.19 * cantidad;
    curitems.levadura -= 0.009 * cantidad;
    curitems.malvaviscos -= 0.19 * cantidad;
    curitems.empaques -= 1;

    cout << endl;

    cout << "El proceso se ha realizado con exito" << endl;

    cout << endl;

    system("pause");
}

void catalogOptions3a2()
{
    curitems.leche -= 0.19;
    curitems.azucar -= 0.095;
    curitems.levadura -= 0.012;
    curitems.harina -= 0.285;
    curitems.dulceLeche -= 0.19;
    curitems.lecheCondensada -= 0.19;
    curitems.empaques -= 0.1;

    cout << "El proceso se ha realizado con exito" << endl;

    cout << endl;

    system("pause");
}

void guardarIngredientes()
{
    ofstream archivo("ingredientes1.txt");

    if (archivo.fail())
    {
        cout << "No se puede abrir archivo" << endl;
        return;
    }

    archivo << curitems.extractoChocolate << endl;
    archivo << curitems.extractoVainilla << endl;
    archivo << curitems.harina << endl;
    archivo << curitems.azucar << endl;
    archivo << curitems.levadura << endl;
    archivo << curitems.dulceLeche << endl;
    archivo << curitems.lecheCondensada << endl;
    archivo << curitems.fresa << endl;
    archivo << curitems.pina << endl;
    archivo << curitems.frutosRojos << endl;
    archivo << curitems.leche << endl;
    archivo << curitems.mantequilla << endl;
    archivo << curitems.mora << endl;
    archivo << curitems.cereza << endl;
    archivo << curitems.mango << endl;
    archivo << curitems.chispasChocolate << endl;
    archivo << curitems.malvaviscos << endl;
    archivo << curitems.huevos << endl;
    archivo << curitems.empaques << endl;

    archivo.close();
    cout << endl;
    cout << "Valores actuales guardados exitosamente" << endl;
    cout << endl;
    system("pause");
}

void cargarIngredientes()
{
    ifstream archivo("ingredientes1.txt");

    if (archivo.fail())
    {
        cout << "No se puede abrir archivo" << endl;
        return;
    }

    archivo >> curitems.extractoChocolate;
    archivo >> curitems.extractoVainilla;
    archivo >> curitems.harina;
    archivo >> curitems.azucar;
    archivo >> curitems.levadura;
    archivo >> curitems.dulceLeche;
    archivo >> curitems.lecheCondensada;
    archivo >> curitems.fresa;
    archivo >> curitems.pina;
    archivo >> curitems.frutosRojos;
    archivo >> curitems.leche;
    archivo >> curitems.mantequilla;
    archivo >> curitems.mora;
    archivo >> curitems.cereza;
    archivo >> curitems.mango;
    archivo >> curitems.chispasChocolate;
    archivo >> curitems.malvaviscos;
    archivo >> curitems.huevos;
    archivo >> curitems.empaques;

    archivo.close();
}

void actualState()
{
    cout << "|-CANTIDAD ACTUAL DE INGREDIENTES-|\n";
    cout << "-EN LITROS-" << endl;
    cout << curitems.extractoChocolate << " de extractoChocolate " << endl;
    cout << curitems.extractoVainilla << " de extractoVainilla " << endl;
    cout << curitems.leche << " de leche" << endl;
    cout << endl;
    cout << "-EN KILOGRAMOS-" << endl;
    cout << curitems.harina << " de harina " << endl;
    cout << curitems.azucar << " de azucar " << endl;
    cout << curitems.levadura << " de levadura " << endl;
    cout << curitems.dulceLeche << " de dulce de leche " << endl;
    cout << curitems.lecheCondensada << " de leche condensada " << endl;
    cout << curitems.fresa << " de fresa " << endl;
    cout << curitems.pina << " de pina " << endl;
    cout << curitems.frutosRojos << " de frutos rojos " << endl;
    cout << curitems.mantequilla << " de mantequilla " << endl;
    cout << curitems.mora << " de mora " << endl;
    cout << curitems.cereza << " de cereza " << endl;
    cout << curitems.mango << " de mango " << endl;
    cout << curitems.chispasChocolate << " de chispas de chocolate " << endl;
    cout << curitems.malvaviscos << " de malvaviscos " << endl;
    cout << endl;
    cout << "-EN UNIDADES-" << endl;
    cout << curitems.huevos << " de huevos " << endl;
    cout << curitems.empaques << " de empaques " << endl;
    cout << endl;
    system("pause");
}