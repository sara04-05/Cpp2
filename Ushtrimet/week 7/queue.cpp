/*
Detyrë:

Të shkruhet një program në C++ që përdor queue.

- krijohet një queue e tipit int
- futen disa numra në queue
- krijohet funksioni f1(queue<int> q, int &rezultati)

Funksioni duhet të:
- marrë queue si parametër
- gjejë elementin e fundit (back)
- ta ruajë në variablën rezultati përmes referencës

Në main():
- thirret funksioni f1
- shfaqet elementi i fundit i queue
*/
#include <iostream>
#include <queue>
using namespace std;

void f1(queue<int> q, int &rezultati)
{
    rezultati = q.back();
}

int main()
{
    queue<int> q;

    q.push(5);
    q.push(2);
    q.push(55);
    q.push(88);

    int iFundit;

    f1(q, iFundit);

    cout << "I fundit " << iFundit << endl;

    return 0;
}