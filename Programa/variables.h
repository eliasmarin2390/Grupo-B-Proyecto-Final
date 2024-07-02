#define MAX_REG 1000

struct ITEMS
{
    float extractoChocolate;
    float extractoVainilla;
    float harina;
    float azucar;
    float levadura;
    float dulceLeche;
    float lecheCondensada;
    float fresa;
    float pina;
    float frutosRojos;
    float leche;
    float mantequilla;
    float mora;
    float cereza;
    float mango;
    float chispasChocolate;
    int malvaviscos;
    int huevos;
    int empaques;
    int id;
    char fecha[30];
};

struct ONGOINGITEMS
{
    float extractoChocolate = 0.015;
    float extractoVainilla= 0.015;
    float harina = 10;
    float azucar = 5.0;
    float levadura = 1.0;
    float dulceLeche = 0.12;
    float lecheCondensada = 0.19;
    float fresa = 0.55;
    float pina = 0.55;
    float frutosRojos = 0.55;
    float leche = 0.19;
    float mantequilla = 2.0;
    float mora = 0.5;
    float cereza = 0.6;
    float mango = 0.6;
    float chispasChocolate = 0.15;
    int malvaviscos = 0.17;
    int huevos = 4;
    int empaques = 10;
};


ONGOINGITEMS curitems;
ITEMS items[MAX_REG];
int pos = 0;
float tamano = 0;
int cantidad = 0;
