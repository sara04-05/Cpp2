/*
Detyrë:

Të shkruhet një program në gjuhën programuese C++ që përdor
container-in array nga STL.

Programi duhet të:

- krijojë një array me 11 elemente të tipit int dhe ta inicializojë
  me vlera të dhëna nga përdoruesi ose të paracaktuara

- kontrollojë nëse array është i zbrazët dhe nëse po, të shfaqë mesazh

- llogarisë shumën e të gjithë elementeve të array-it

- llogarisë mesataren e elementeve

- numërojë sa elemente janë më të mëdha se mesatarja

Në fund, programi duhet të shfaqë:
- mesataren e elementeve
- numrin e elementeve mbi mesatare

Programi duhet të përdorë funksionet e STL array si:
- size()
- empty()
- at()
*/
#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 11> arr = {1, 3, 4, 5, 6, 7, 8, 9, 2, 4};

    double s = 0;

    if (arr.empty() == true)
    {
        cout << "Vargu eshte i zbrazet";
    }

    for (int i = 0; i < arr.size(); i++)
    {
        // s += arr[i];
        s += arr.at(i);
    }

    double m = s / arr.size();
    int nrMbiMesatare = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr.at(i) > m)
        {
            nrMbiMesatare++;
        }
    }

    cout << "Mesatarja: " << m << endl;
    cout << "Mbi mesatare: " << nrMbiMesatare << endl;

    return 0;
}