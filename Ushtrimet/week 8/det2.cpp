/*
Detyrë në C++ – list (STL)

- Krijohet listë int
- Futet n numra nga përdoruesi me push_back
- print() shfaq listën me iterator (begin/end)
- modifiko():
    'B' → pop_back
    'F' → pop_front
    'R' → reverse
- Pas çdo modifikimi lista shfaqet
*/
#include <iostream>
#include <list>
using namespace std;

void print(list<int> l)
{
    cout << "Lista: ";
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void modifiko(list<int> *l, char o)
{
    switch (o)
    {
    case 'B':
        l->pop_back();
        break;
    case 'F':
        l->pop_front();
        break;
    case 'R':
        l->reverse();
        break;
    }
}

int main()
{
    int n;
    cout << "Sa numra don me i rujt: ";
    cin >> n;

    list<int> l;

    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "Vendosni vleren: ";
        cin >> x;
        l.push_back(x);
    }

    modifiko(&l, 'B');
    print(l);
    modifiko(&l, 'F');
    print(l);
    modifiko(&l, 'R');
    print(l);

    return 0;
}