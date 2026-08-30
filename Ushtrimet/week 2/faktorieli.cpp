/*
Detyrë:

Të krijohet funksioni:

void faktorieli(int n, int *rez)

Funksioni duhet të:
- pranojë një numër të plotë n dhe një pointer të tipit int
- llogarisë faktorielin e numrit n
- ruajë rezultatin në adresën e pranuar përmes pointerit

Në funksionin main():
- alokoni dinamikisht një variabël të tipit int
- thirrni funksionin faktorieli() për të llogaritur faktorielin e numrit 5
- shfaqni rezultatin në ekran

Pastaj:
- alokoni dinamikisht një varg me 10 elemente të tipit int
- mbushni vargun me vlera duke përdorur aritmetikën e pointerëve
- ndryshoni vlerën e elementeve përmes pointerit
- lironi memorien e rezervuar për vargun

Në fund, programi duhet të shfaqë faktorielin e numrit të dhënë dhe të menaxhojë saktë memorien dinamike.
*/

#include <iostream>
using namespace std;

void faktorieli(int n, int *rez)
{
    int f = 1;
    for (int i = n; i > 0; i--)
    {
        f *= i;
    }

    *rez = f;
}

int main()
{
    int *ptr = new int;

    faktorieli(5, ptr); // n = 5, rez = ptr;

    cout << *ptr << endl;

    int size = 10;

    int *array = new int[size];

    // ndrysho antarin e pare
    *array = 5;

    for (int i = 0; i < 10; i++)
    {
        // array[i] = i + 8;
        *(array + i) = i + 8;
    }

    delete[] array;

    return 0;
}