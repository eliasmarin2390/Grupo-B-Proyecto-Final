#include <iostream>
#include <string.h>
#include "variables.h"
#include <fstream>
#include <cstdlib>
#include "subtract.cpp"
#include "addItem.cpp"
#include "catalogOptions.cpp"

using namespace std;

void catalogOptions();
void addItem();
void subtract();
void actualState();
void createReg();
void searchReg();

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

void createReg()
{
    system("cls||clear");
    if (pos >= MAX_REG)
    {
        cout << "Se ha alcanzado el limite maximo de registros." << endl;
        return;
    }

    ITEMS newItem;
    cout << "Ingrese los detalles del nuevo registro:\n";
    cout << "ID: ";
    cin >> newItem.id;
    cout << "Extracto de Chocolate (en litros): ";
    cin >> newItem.extractoChocolate;
    cout << "Extracto de Vainilla (en litros): ";
    cin >> newItem.extractoVainilla;
    cout << "Harina (en kg): ";
    cin >> newItem.harina;
    cout << "Azucar (en kg): ";
    cin >> newItem.azucar;
    cout << "Levadura (en kg): ";
    cin >> newItem.levadura;
    cout << "Dulce de Leche (en kg): ";
    cin >> newItem.dulceLeche;
    cout << "Leche Condensada (en kg): ";
    cin >> newItem.lecheCondensada;
    cout << "Fresa (en kg): ";
    cin >> newItem.fresa;
    cout << "Piña (en kg): ";
    cin >> newItem.pina;
    cout << "Frutos Rojos (en kg): ";
    cin >> newItem.frutosRojos;
    cout << "Leche (en litros): ";
    cin >> newItem.leche;
    cout << "Mantequilla (en kg): ";
    cin >> newItem.mantequilla;
    cout << "Mora (en kg): ";
    cin >> newItem.mora;
    cout << "Cereza (en kg): ";
    cin >> newItem.cereza;
    cout << "Mango (en kg): ";
    cin >> newItem.mango;
    cout << "Chispas de Chocolate (en kg): ";
    cin >> newItem.chispasChocolate;
    cout << "Malvaviscos (en unidades): ";
    cin >> newItem.malvaviscos;
    cout << "Huevos (en unidades): ";
    cin >> newItem.huevos;
    cout << "Empaques (en unidades): ";
    cin >> newItem.empaques;
    cout << "Fecha (dd/mm/yyyy): ";
    cin.ignore();
    cin.getline(newItem.fecha, 30);

    items[pos++] = newItem;

    ofstream file("registros.txt", ios::app);
    if (!file)
    {
        cout << "Error al abrir el archivo para guardar el registro." << endl;
        return;
    }

    file << newItem.id << " "
         << newItem.extractoChocolate << " "
         << newItem.extractoVainilla << " "
         << newItem.harina << " "
         << newItem.azucar << " "
         << newItem.levadura << " "
         << newItem.dulceLeche << " "
         << newItem.lecheCondensada << " "
         << newItem.fresa << " "
         << newItem.pina << " "
         << newItem.frutosRojos << " "
         << newItem.leche << " "
         << newItem.mantequilla << " "
         << newItem.mora << " "
         << newItem.cereza << " "
         << newItem.mango << " "
         << newItem.chispasChocolate << " "
         << newItem.malvaviscos << " "
         << newItem.huevos << " "
         << newItem.empaques << " "
         << newItem.fecha << endl;

    file.close();
    cout << "Registro ya se ha creado " << endl;
    system("pause");
}

void searchReg()
{
    system("cls||clear");

    ifstream checkFile("registros.txt");
    if (!checkFile.is_open())
    {
        cout << "Sin registros" << endl;
        system("pause");
        return;
    }
    checkFile.close();

    ifstream file("registros.txt");
    if (!file)
    {
        cout << "Error al abrir el archivo de registros." << endl;
        return;
    }

    int searchID;
    cout << "Ingrese el ID del registro que desea buscar: ";
    cin >> searchID;

    bool found = false;
    ITEMS item;
    while (file >> item.id >> item.extractoChocolate >> item.extractoVainilla >> item.harina >> item.azucar >> item.levadura >> item.dulceLeche >> item.lecheCondensada >> item.fresa >> item.pina >> item.frutosRojos >> item.leche >> item.mantequilla >> item.mora >> item.cereza >> item.mango >> item.chispasChocolate >> item.malvaviscos >> item.huevos >> item.empaques >> item.fecha)
    {

        if (item.id == searchID)
        {
            found = true;
            cout << "Registro encontrado:\n";
            cout << "ID: " << item.id << endl;
            cout << "Extracto de Chocolate: " << item.extractoChocolate << " litros" << endl;
            cout << "Extracto de Vainilla: " << item.extractoVainilla << " litros" << endl;
            cout << "Harina: " << item.harina << " kg" << endl;
            cout << "Azucar: " << item.azucar << " kg" << endl;
            cout << "Levadura: " << item.levadura << " kg" << endl;
            cout << "Dulce de Leche: " << item.dulceLeche << " kg" << endl;
            cout << "Leche Condensada: " << item.lecheCondensada << " kg" << endl;
            cout << "Fresa: " << item.fresa << " kg" << endl;
            cout << "Piña: " << item.pina << " kg" << endl;
            cout << "Frutos Rojos: " << item.frutosRojos << " kg" << endl;
            cout << "Leche: " << item.leche << " litros" << endl;
            cout << "Mantequilla: " << item.mantequilla << " kg" << endl;
            cout << "Mora: " << item.mora << " kg" << endl;
            cout << "Cereza: " << item.cereza << " kg" << endl;
            cout << "Mango: " << item.mango << " kg" << endl;
            cout << "Chispas de Chocolate: " << item.chispasChocolate << " kg" << endl;
            cout << "Malvaviscos: " << item.malvaviscos << " unidades" << endl;
            cout << "Huevos: " << item.huevos << " unidades" << endl;
            cout << "Empaques: " << item.empaques << " unidades" << endl;
            cout << "Fecha: " << item.fecha << endl;
            break;
        }
    }

    if (!found)
    {
        cout << "No se encontró ningun registro con el ID " << searchID << "." << endl;
    }

    file.close();
    system("pause");
}
void actualState()
{
    system("cls||clear");
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