#include <iostream>
#include <fstream>

using namespace std;

void subtract()
{
    int op;
    float aux;
    system("cls||clear");
    cout << "¿Cuántos ingredientes/objetos (en kg, litros o unidades) desea sustraer?" << endl;
    cin >> aux;
    cout << endl;
    cout << "-EN LITROS-" << endl;
    cout << "(1) Extracto de chocolate " << endl;
    cout << "(2) Extracto de vainilla " << endl;
    cout << "(3) Leche" << endl;
    cout << endl;
    cout << "-EN KILOGRAMOS-" << endl;
    cout << "(4) Harina " << endl;
    cout << "(5) Azucar " << endl;
    cout << "(6) Levadura " << endl;
    cout << "(7) Dulce de leche " << endl;
    cout << "(8) Leche condensada " << endl;
    cout << "(9) Fresa " << endl;
    cout << "(10) Piña " << endl;
    cout << "(11) Frutos rojos " << endl;
    cout << "(12) Mantequilla " << endl;
    cout << "(13) Mora " << endl;
    cout << "(14) Cereza " << endl;
    cout << "(15) Mango " << endl;
    cout << "(16) Chispas de chocolate " << endl;
    cout << "(17) Malvaviscos " << endl;
    cout << endl;
    cout << "-EN UNIDADES-" << endl;
    cout << "(18) Huevos " << endl;
    cout << "(19) Empaques " << endl;
    cout << endl;
    cout << "¿A qué se lo sustraerá?" << endl;
    cin >> op;
    switch (op)
    {
    case 1:
        curitems.extractoChocolate -= aux;
        system("pause");
        break;

    case 2:
        curitems.extractoVainilla -= aux;
        system("pause");
        break;

    case 3:
        curitems.leche -= aux;
        system("pause");
        break;

    case 4:
        curitems.harina -= aux;
        system("pause");
        break;

    case 5:
        curitems.azucar -= aux;
        system("pause");
        break;

    case 6:
        curitems.levadura -= aux;
        system("pause");
        break;

    case 7:
        curitems.dulceLeche -= aux;
        system("pause");
        break;

    case 8:
        curitems.lecheCondensada -= aux;
        system("pause");
        break;

    case 9:
        curitems.fresa -= aux;
        system("pause");
        break;

    case 10:
        curitems.pina -= aux;
        system("pause");
        break;

    case 11:
        curitems.frutosRojos -= aux;
        system("pause");
        break;

    case 12:
        curitems.mantequilla -= aux;
        system("pause");
        break;

    case 13:
        curitems.mora -= aux;
        system("pause");
        break;

    case 14:
        curitems.cereza -= aux;
        system("pause");
        break;

    case 15:
        curitems.mango -= aux;
        system("pause");
        break;

    case 16:
        curitems.chispasChocolate -= aux;
        system("pause");
        break;

    case 17:
        curitems.malvaviscos -= aux;
        system("pause");
        break;

    case 18:
        curitems.huevos -= aux;
        system("pause");
        break;

    case 19:
        curitems.empaques -= aux;
        system("pause");
        break;

    default:
        cout << "Opcion no valida" << endl;
        system("pause");
        break;
    }
}