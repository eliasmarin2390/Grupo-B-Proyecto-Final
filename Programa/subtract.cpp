#include <iostream>
#include <fstream>

using namespace std;

void subtract()
{
    int op;
float aux;
system("cls||clear");
cout << "¿Cuanntos ingredientes/objetos (en kg, litros o unidades) desea sustraer?" << endl;
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
    if (aux > curitems.extractoChocolate) {
        cout << "No se puede sustraer mas de lo que hay disponible (" << curitems.extractoChocolate << " litros)." << endl;
    } else {
        curitems.extractoChocolate -= aux;
        cout << aux << " litros de Extracto de chocolate sustraidos correctamente." << endl;
    }
    break;

case 2:
    if (aux > curitems.extractoVainilla) {
        cout << "No se puede sustraer mas de lo que hay disponible (" << curitems.extractoVainilla << " litros)." << endl;
    } else {
        curitems.extractoVainilla -= aux;
        cout << aux << " litros de Extracto de vainilla sustraidos correctamente." << endl;
    }
    break;

case 3:
    if (aux > curitems.leche) {
        cout << "No se puede sustraer mas de lo que hay disponible (" << curitems.leche << " litros)." << endl;
    } else {
        curitems.leche -= aux;
        cout << aux << " litros de Leche sustraidos correctamente." << endl;
    }
    break;

case 4:
    if (aux > curitems.harina) {
        cout << "No se puede sustraer mas de lo que hay disponible (" << curitems.harina << " kg)." << endl;
    } else {
        curitems.harina -= aux;
        cout << aux << " kg de Harina sustraidos correctamente." << endl;
    }
    break;

case 5:
    if (aux > curitems.azucar) {
        cout << "No se puede sustraer mas de lo que hay disponible (" << curitems.azucar << " kg)." << endl;
    } else {
        curitems.azucar -= aux;
        cout << aux << " kg de Azúcar sustraidos correctamente." << endl;
    }
    break;

case 6:
    if (aux > curitems.levadura) {
        cout << "No se puede sustraer mas de lo que hay disponible (" << curitems.levadura << " kg)." << endl;
    } else {
        curitems.levadura -= aux;
        cout << aux << " kg de Levadura sustraidos correctamente." << endl;
    }
    break;

case 7:
    if (aux > curitems.dulceLeche) {
        cout << "No se puede sustraer más de lo que hay disponible (" << curitems.dulceLeche << " kg)." << endl;
    } else {
        curitems.dulceLeche -= aux;
        cout << aux << " kg de Dulce de leche sustraidos correctamente." << endl;
    }
    break;

case 8:
    if (aux > curitems.lecheCondensada) {
        cout << "No se puede sustraer mas de lo que hay disponible (" << curitems.lecheCondensada << " kg)." << endl;
    } else {
        curitems.lecheCondensada -= aux;
        cout << aux << " kg de Leche condensada sustraidos correctamente." << endl;
    }
    break;

case 9:
    if (aux > curitems.fresa) {
        cout << "No se puede sustraer mas de lo que hay disponible (" << curitems.fresa << " kg)." << endl;
    } else {
        curitems.fresa -= aux;
        cout << aux << " kg de Fresa sustraídos correctamente." << endl;
    }
    break;

case 10:
    if (aux > curitems.pina) {
        cout << "No se puede sustraer mas de lo que hay disponible (" << curitems.pina << " kg)." << endl;
    } else {
        curitems.pina -= aux;
        cout << aux << " kg de Piña sustraidos correctamente." << endl;
    }
    break;

case 11:
    if (aux > curitems.frutosRojos) {
        cout << "No se puede sustraer mas de lo que hay disponible (" << curitems.frutosRojos << " kg)." << endl;
    } else {
        curitems.frutosRojos -= aux;
        cout << aux << " kg de Frutos rojos sustraidos correctamente." << endl;
    }
    break;

case 12:
    if (aux > curitems.mantequilla) {
        cout << "No se puede sustraer mas de lo que hay disponible (" << curitems.mantequilla << " kg)." << endl;
    } else {
        curitems.mantequilla -= aux;
        cout << aux << " kg de Mantequilla sustraidos correctamente." << endl;
    }
    break;

case 13:
    if (aux > curitems.mora) {
        cout << "No se puede sustraer mas de lo que hay disponible (" << curitems.mora << " kg)." << endl;
    } else {
        curitems.mora -= aux;
        cout << aux << " kg de Mora sustraidos correctamente." << endl;
    }
    break;

case 14:
    if (aux > curitems.cereza) {
        cout << "No se puede sustraer mas de lo que hay disponible (" << curitems.cereza << " kg)." << endl;
    } else {
        curitems.cereza -= aux;
        cout << aux << " kg de Cereza sustraidos correctamente." << endl;
    }
    break;

case 15:
    if (aux > curitems.mango) {
        cout << "No se puede sustraer mas de lo que hay disponible (" << curitems.mango << " kg)." << endl;
    } else {
        curitems.mango -= aux;
        cout << aux << " kg de Mango sustraidos correctamente." << endl;
    }
    break;

case 16:
    if (aux > curitems.chispasChocolate) {
        cout << "No se puede sustraer mas de lo que hay disponible (" << curitems.chispasChocolate << " kg)." << endl;
    } else {
        curitems.chispasChocolate -= aux;
        cout << aux << " kg de Chispas de chocolate sustraidos correctamente." << endl;
    }
    break;

case 17:
    if (aux > curitems.malvaviscos) {
        cout << "No se puede sustraer mas de lo que hay disponible (" << curitems.malvaviscos << " kg)." << endl;
    } else {
        curitems.malvaviscos -= aux;
        cout << aux << " kg de Malvaviscos sustraidos correctamente." << endl;
    }
    break;

case 18:
    if (aux > curitems.huevos) {
        cout << "No se puede sustraer mas de lo que hay disponible (" << curitems.huevos << " unidades)." << endl;
    } else {
        curitems.huevos -= aux;
        cout << aux << " unidades de Huevos sustraidos correctamente." << endl;
    }
    break;

case 19:
    if (aux > curitems.empaques) {
        cout << "No se puede sustraer mas de lo que hay disponible (" << curitems.empaques << " unidades)." << endl;
    } else {
        curitems.empaques -= aux;
        cout << aux << " unidades de Empaques sustraidos correctamente." << endl;
    }
    break;

default:
    cout << "Opcion no valida" << endl;
    break;
}

system("pause");

}