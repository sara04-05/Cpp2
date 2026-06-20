/*
Detyrë:

Të krijohet funksioni:

int shuma(int *a, int v2)

Funksioni duhet të:
- pranojë adresën e një variable të tipit int dhe një numër int
- ndryshojë vlerën e variablës së pranuar në 1000000
- krijojë një variabël lokale me vlerë 5
- kthejë shumën e vlerës së ndryshuar, numrit të pranuar dhe variablës lokale

Në funksionin main():
- deklaroni variablat a = 10, b = 11 dhe c = 12
- thirrni funksionin duke i dërguar adresën e a dhe vlerën e b
- shfaqni adresat e variablave a, b dhe c
- shfaqni mesazhin "Fundi"
*/

#include <iostream>
using namespace std;

int main()
{
    float a = 5;
    float *ptr_a = &a;

    float **ptr2 = &ptr_a;

    cout << "Vlera e a permes ptr_a: " << *ptr_a << endl;
    cout << "Vlera e a permes ptr2: " << **ptr2 << endl;

    **ptr2 = 11;

    cout << "Vlera a: " << a << endl;
    cout << "Vlera e a permes ptr_a: " << *ptr_a << endl;
    cout << "Vlera e a permes ptr2: " << **ptr2 << endl;

    return 0;
}