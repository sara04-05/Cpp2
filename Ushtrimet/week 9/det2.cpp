/*
Detyrë në C++ – unordered_map (notat e studentëve)

- Krijohet unordered_map<string, int> ku:
    emri -> nota

- Përdoruesi fut 5 studentë (emër dhe notë)

- Kontrollohet nëse studenti "Arber" ekziston dhe shfaqet nota

- Shfaqen studentët me notë >= 9

- Fshihet studenti "Erisa" me erase()

- Në fund shfaqet lista e mbetur e studentëve
*/
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> notat;

    for (int i = 0; i < 5; i++)
    {
        cout << "Vendosne emrin: ";
        string emri;
        cin >> emri;
        cout << "Vendosne noten: ";
        int nota;
        cin >> nota;

        notat.insert({emri, nota});
    }

    if (notat["Arber"] != 0)
    {
        cout << "Studenti e ka noten " << notat["Arber"];
    }
    else
    {
        cout << "Studenti nuk ekzistion";
    }

    cout << "Studenet me note me te madhe se 9" << endl;
    for (auto it = notat.begin(); it != notat.end(); it++)
    {
        if (it->second >= 9)
        {
            cout << "Name: " << it->first << " ";
            cout << "Grade: " << it->second << "\n";
        }
    }

    notat.erase("Erisa");

    for (auto it = notat.begin(); it != notat.end(); it++)
    {
        cout << "Name: " << it->first << " ";
        cout << "Grade: " << it->second << "\n";
    }

    return 0;
}