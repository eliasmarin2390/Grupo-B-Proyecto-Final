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
};


ONGOINGITEMS curitems;
ITEMS items[MAX_REG];
int pos = 0;
float tamano = 0;
int cantidad = 0;
