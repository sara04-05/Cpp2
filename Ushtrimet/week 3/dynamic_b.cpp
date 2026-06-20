/*
Detyrë:

Të shkruhet një program në gjuhën programuese C++ që demonstron
përdorimin e memories dinamike dhe pointerëve.

Programi duhet të:

- krijojë një funksion test() që:
  - deklaron një pointer me vlerë nullptr
  - alokon dinamikisht një variabël të tipit int
  - e fshin memorien e alokuar

Në funksionin main():

- deklarojë një pointer dhe të alokojë dinamikisht një variabël int
- t’i japë vlerën 10 asaj variabli
- shfaqë vlerën përmes pointerit
- lirojë memorien dinamike

Pastaj:
- lexojë nga përdoruesi një numër n
- krijojë një varg statik me 4 elemente dhe ta shfaqë
- shfaqë adresën e elementit të parë të vargut
- shfaqë elementet e vargut duke përdorur:
  - indeksimin e zakonshëm
  - aritmetikën e pointerëve

Më pas:
- alokojë dinamikisht një varg me madhësi n
- caktojë vlerën 10 në elementin e parë të vargut
- shfaqë të gjitha elementet duke përdorur pointerë
- lirojë memorien e vargut dinamik në fund të programit
*/
#include <iostream>
using namespace std;

void test()
{
    int *ptr_1 = nullptr;

    ptr_1 = new int;

    delete ptr_1;
}

int main()
{
    int *ptr_1 = nullptr;

    ptr_1 = new int;

    *ptr_1 = 10;

    cout << "Vlera ku pointon ptr_1: " << *ptr_1 << endl;

    delete ptr_1;

    int n;

    cout << "Vendos madhesin: ";
    cin >> n;

    int array[4] = {1, 2, 3, 4};

    cout << "Vargu eshte: " << array << endl;
    cout << "Adresa e antarit te pare: " << &array[0] << endl;

    cout << "Antari i pare: " << array[0] << endl;
    cout << "Antari i pare: " << *(array + 0) << endl;

    cout << "Antari i dyte: " << array[1] << endl;
    cout << "Antari i dyte: " << *(array + 1) << endl;

    cout << "Antari i tre: " << array[2] << endl;
    cout << "Antari i tre: " << *(array + 2) << endl;

    int *array2 = new int[n];

    array2[0] = 10;
    *(array2 + 0) = 10;
    *(array2) = 10;

    for (int i = 0; i < n; i++)
    {
        cout << array2[i] << endl;
        cout << *(array2 + i) << endl;
    }

    delete[] array2;

    return 0;
}