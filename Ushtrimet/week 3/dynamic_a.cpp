/*
Detyrë:

Të shkruhet një program në gjuhën programuese C++ që demonstron
përdorimin e pointerëve, vargjeve dhe memories dinamike.

Programi duhet të:

- deklarojë një pointer me vlerë nullptr
- alokojë dinamikisht një variabël të tipit int
- shfaqë vlerën në adresën ku pointon pointeri

Pastaj:
- krijojë një varg statik me 4 elemente
- shfaqë të gjithë elementet e vargut duke përdorur aritmetikën e pointerëve

Më pas:
- lexojë nga përdoruesi numrin e elementeve të një vargu dinamik
- alokojë dinamikisht vargun me madhësinë e dhënë
- caktojë vlerën 10 për elementin e parë të vargut
- shfaqë elementet e vargut duke përdorur pointerë

Në fund:
- lirojë memorien e rezervuar për vargun dinamik duke përdorur delete[].
*/
#include <iostream>
using namespace std;

int main()
{
    int *ptr_1 = nullptr;
    int *ptr_2 = new int;

    cout << "Vlera ku pointon ptr_2: " << *ptr_2 << endl;

    int array[4] = {1, 2, 3, 4};

    cout << "Vlera e array[0]: " << *(array + 0) << endl;
    cout << "Vlera e array[1]: " << *(array + 1) << endl;
    cout << "Vlera e array[2]: " << *(array + 2) << endl;
    cout << "Vlera e array[3]: " << *(array + 3) << endl;

    int n = 4;

    cout << "Vendos numrin e anterave: ";
    cin >> n;

    int *array2 = new int[n];

    cin >> n;

    // cakto vleren e antarit te pare
    array2[0] = 10;
    *(array2 + 0) = 10; // *array2 = 10;

    for (int i = 0; i < n; i++)
    {
        cout << "Antari " << i + 1 << " " << *(array2 + i) << " ";
        // cout << "Antari " << i + 1 << " " << array2[i] << " ";
    }

    delete[] array2;

    return 0;
}