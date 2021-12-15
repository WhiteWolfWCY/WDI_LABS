#include <stdio.h>
#include <stdlib.h>


#define dlugosc_nazwy 20

typedef struct produkt
{
    int id;
    int wartosc;
    int ilosc;
    char nazwa[dlugosc_nazwy];
    char* nazwaPtr;
    int specjalna_oferta;

} prod;

struct elementy
{

    int wartosc;
    struct elementy* next;

    prod p;


};



void wypiszProdukt(prod p)
{
    printf("p: id:%d, wartosc:%d, ilosc:%d, nazwa:%s, nazwa ptr:%s\n", p.id, p.wartosc, p.ilosc, p.nazwa, p.nazwaPtr);

}


int main()
{
    static int idCounter =0;

    prod tab[4];

    prod p1;
    p1.id = idCounter++;
    p1.wartosc = 2;
    p1.ilosc = 10;
    strncpy(p1.nazwa, "laptop", dlugosc_nazwy);
    char tempnazwa[] = "laptop ptr";
    p1.nazwaPtr = tempnazwa;
    wypiszProdukt(p1);
    tab[0] = p1;

    prod p2;
    p2.id = idCounter++;
    p2.wartosc = 2000;
    p2.ilosc = 2;
    strncpy(p2.nazwa, "lodowka", dlugosc_nazwy);
    char tempnazwa2[] = "lodowka ptr";
    p2.nazwaPtr = tempnazwa2;
    wypiszProdukt(p2);

    prod p3;
    p3.id = idCounter++;
    p3.wartosc = 5;
    p3.ilosc = 3000;
    strncpy(p3.nazwa, "Teleon samsung", dlugosc_nazwy);
    char tempnazwa3[] = "Teleon samsung ptr";
    p3.nazwaPtr = tempnazwa3;
    wypiszProdukt(p3);

    tab[1] = p2;
    tab[2] = p3;

    int suma = 0;
    for(int i=0; i<3; i++)
    {
        wypiszProdukt(tab[i]);

        suma += tab[i].wartosc * tab[i].ilosc;
    }

    printf("\nsuma: %d\n", suma);




    return 0;
}
