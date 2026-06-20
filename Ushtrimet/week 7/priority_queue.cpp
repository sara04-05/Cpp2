/*
Detyrë:

Të krijohet program në C++ që përdor priority_queue.

- futen 7 numra në priority_queue
- krijohet funksioni f1 që i printon dhe i fshin elementet
- thirret f1 dy herë në main
- në thirrjen e dytë queue është bosh
*/
#include <iostream>
#include <queue>
using namespace std;

void f1(priority_queue<double> &pq)
{
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
}

int main()
{
    priority_queue<double> pq;

    while (pq.size() < 7)
    {
        double x;
        cout << "Vendose nje nr: ";
        cin >> x;

        pq.push(x);
    }

    f1(pq);

    cout << "\n thirrja e dyte \n";

    f1(pq);

    return 0;
}