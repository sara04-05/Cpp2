/*
Detyrë:

Të shkruhet një program në gjuhën programuese C++ që përdor
vector nga STL.

Programi duhet të:

- krijojë një vector bosh të tipit int
- lejojë përdoruesin të fusë numra vazhdimisht
- ndalojë futjen kur përdoruesi shkruan -1

Pas futjes së të dhënave, programi duhet të:

- gjejë elementin më të vogël (minimumin) në vector
- shfaqë vlerën minimale në ekran

Programi duhet të përdorë:
- push_back() për shtim elementesh
- at() për qasje në elemente
- size() për kontroll të madhësisë së vector-it
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    while (true)
    {
        cout << "Vendose nje numer (-1 per tu ndalur): ";

        int n;
        cin >> n;

        if (n == -1)
        {
            break;
        }

        v.push_back(n);
    }

    int min = v.at(0);

    for (int i = 1; i < v.size(); i++)
    {
        if (v.at(i) < min)
        {
            min = v.at(i);
        }
    }

    cout << "Min: " << min << endl;

    return 0;
}