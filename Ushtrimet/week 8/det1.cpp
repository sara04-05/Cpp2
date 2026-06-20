/*
Detyrë:

Të shkruhet program në C++ që përdor list (STL).

- krijohet një listë e tipit double
- futen 6 numra nga përdoruesi
- nëse numri është në interval (2, 2.9) shtohet në fund
- përndryshe shtohet në fillim

Pastaj:
- fshihen elementet që janë në interval (2, 2.9)
- shfaqen elementet e mbetura në listë

Programi duhet të përdorë:
- push_front / push_back
- iterator (begin, end)
- erase()
*/
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<double> l1;

    for (int i = 0; i < 6; i++)
    {
        double x;
        cout << "Vendose nje numer: ";
        cin >> x;

        if (x > 2 && x < 2.9)
        {
            l1.push_back(x);
        }
        else
        {
            l1.push_front(x);
        }
    }

    // list<double>::iterator it = l1.begin();
    // auto it1 = l1.begin();

    for (auto it = l1.begin(); it != l1.end(); it++)
    {
        if (*it > 2 && *it < 2.9)
        {
            l1.erase(it);
        }
    }

    cout << "Vlerat e mbetura: ";

    for (auto it = l1.begin(); it != l1.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}