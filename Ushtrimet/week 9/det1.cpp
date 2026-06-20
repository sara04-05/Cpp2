/*
Detyrë në C++ – unordered_map

- Krijohet unordered_map që ruan:
    id -> emër studenti

- Shtohen disa studentë manualisht

- Shfaqen të gjithë studentët me iterator (begin/end)

- Përdoruesi jep një id dhe kërkohet në map

- Nëse ekziston shfaqet emri,
  përndryshe shfaqet mesazh që nuk ekziston
*/
#include <iostream>
#include <unordered_map>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    unordered_map<int, string> studentet;

    studentet[21332432] = "Jon";
    studentet[34324324] = "Kron";
    studentet[34324234] = "Lisa";

    for (auto it = studentet.begin(); it != studentet.end(); it++)
    {
        cout << "Id : " << it->first;
        cout << "Name: " << it->second << "\n";
    }

    cout << "Vendosni id e studentit qe deshironi te kerkoni: ";
    int id;
    cin >> id;

    if (studentet[id] == "")
    {
        cout << "Vlera nuk ekzsiston";
    }
    else
    {
        cout << "Vlera e ruajtur: " << studentet[id];
    }

    return 0;
}