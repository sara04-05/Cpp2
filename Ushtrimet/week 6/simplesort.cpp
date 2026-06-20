/*
Detyrë:

Të krijohet program në C++ që:

- krijon një vector me numra
- i rendit elementet në rend rritës duke përdorur 2 for loops (O(n²))
- shkëmben elementet kur v[i] < v[j]
- në fund i shfaq elementet e renditura në ekran

Programi duhet të përdorë vector dhe cikle të ndërthurura.
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {5, 2, 9, 1, 3};

    for (int i = 0; i < v.size(); i++)
    { // n
        for (int j = 0; j < v.size(); j++)
        { // n
            if (v[i] < v[j])
            {
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}