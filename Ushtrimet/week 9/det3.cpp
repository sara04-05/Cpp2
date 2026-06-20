/*
Detyrë në C++ – unordered_map (numërimi i elementeve)

- Krijohet një array me fruta (string)

- Përdoret unordered_map<string, int> për numërim

- Çdo frut numërohet sa herë paraqitet

- Shfaqet rezultati:
    fruti -> sa herë paraqitet
*/
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string frutat[6] = {"molle", "dardhe", "molle", "qershi", "molle", "dardhe"};

    unordered_map<string, int> numeruesi;

    for (int i = 0; i < 6; i++)
    {
        string fruti = frutat[i];

        numeruesi[fruti]++;
    }

    for (auto it = numeruesi.begin(); it != numeruesi.end(); it++)
    {
        cout << "Fruti " << it->first << " paraqitet " << it->second << " here. \n";
    }

    return 0;
}