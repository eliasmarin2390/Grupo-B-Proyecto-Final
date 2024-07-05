#include <iostream>
#include <fstream>

using namespace std;

void catalogOptions1();
void catalogOptions2();
void catalogOptions3();
void catalogOptions3a1();
void catalogOptions3a2();

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
    cout << "¿Cuantas galletas seran?" << endl;
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