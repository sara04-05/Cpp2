/*
Detyrë:

Të shkruhet një program në gjuhën programuese C++ që demonstron
përdorimin e pointerëve dhe pointerëve të pointerëve.

Programi duhet të:

- deklarojë një variabël të tipit double me vlerë fillestare 43
- deklarojë një variabël të tipit int me vlerë 3
- shfaqë adresën e variablës double

Pastaj:
- krijojë një pointer që ruan adresën e variablës double
- ndryshojë vlerën e saj në 10 përmes pointerit
- shfaqë vlerën e variablës dhe vlerën përmes pointerit

Më pas:
- krijojë një pointer të pointerit (double **)
- ndryshojë vlerën e variablës në 11 përmes pointerit të pointerit
- shfaqë përsëri vlerën e variablës dhe vlerën përmes pointerit

Në fund, programi duhet të tregojë se si mund të qaset dhe të ndryshohet
një variabël duke përdorur pointerë dhe pointerë të pointerëve.
*/

#include <iostream>
using namespace std;

int main()
{
    double a = 43;
    int b;
    b = 3;

    cout << "Adresa e a eshte: " << &a << endl;

    double *pointer_a = &a;

    *pointer_a = 10; // ->>> a = 10;

    cout << "Vlera e a: " << a << endl;
    cout << "Vlera e a permes pointeri: " << *pointer_a << endl;

    double **ptr2 = &pointer_a;

    **ptr2 = 11; //->> *pointer_a = 10 ->>> a = 10;

    cout << "Vlera e a: " << a << endl;
    cout << "Vlera e a permes ptr2: " << *pointer_a << endl;

    return 0;
}