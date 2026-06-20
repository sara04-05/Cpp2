/*
Detyrë:

Krijoni funksionin:

int shuma(int *a, int v2)

i cili:
- merr adresën e një variable int dhe një numër int
- ndryshon vlerën e variablës në 1000000 duke përdorur pointer
- krijon një variabël lokale c = 5
- kthen shumën e *a, v2 dhe c

Në main():
- deklaroni variablat a = 10, b = 11, c = 12
- thirrni funksionin shuma(&a, b)
- shfaqni adresat e variablave a, b dhe c
- shfaqni tekstin "Fundi"
*/

#include <iostream>
using namespace std;

int shuma(int *a, int v2)
{
    *a = 1000000;
    int c = 5;

    return *a + v2 + c;
}

int main()
{
    int a = 10;
    int b = 11;
    double c = 12;

    int *pointerA = &a;

    shuma(&a, b);

    cout << "Adresa e variables a: " << &a << endl;
    cout << "Adresa e variables b: " << &b << endl;
    cout << "Adresa e variables c: " << &c << endl;

    cout
        << "Fundi" << endl;

    return 0;
}