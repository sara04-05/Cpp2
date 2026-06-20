/*
Detyrë:

Të krijohet një program në gjuhën programuese C++ që implementon një
Phonebook (libër kontaktesh) duke përdorur klasa dhe memory dinamike.

Programi duhet të përmbajë:

KLASA Contact:
- atributet:
  - name (string)
  - number (string)

- konstruktor default dhe konstruktor me parametra
- funksion print() që shfaq emrin dhe numrin e kontaktit

KLASA Phonebook:
- atributet:
  - name (string)
  - capacity (madhësia maksimale e kontakteve)
  - count (numri aktual i kontakteve)
  - contacts (pointer dinamik për Contact)

- konstruktor:
  - merr kapacitetin si parametër
  - inicializon numrin e kontakteve në 0
  - alokon memorien dinamike për kontaktet

- funksionet:
  - add():
    * lejon shtimin e një kontakti të ri (emër dhe numër)
    * ruan kontaktin në vargun dinamik

  - list():
    * shfaq të gjitha kontaktet e ruajtura

  - edit():
    * kërkon një kontakt sipas emrit
    * nëse gjendet, lejon ndryshimin e numrit
    * nëse nuk gjendet, shfaq mesazhin "Nuk u gjet"

Në funksionin main():
- kërkohet nga përdoruesi madhësia e phonebook
- krijohet objekti Phonebook me kapacitetin e dhënë
- programi duhet të ketë menu në loop:
  1 - shto kontakt
  2 - edito kontakt
  3 - shfaq kontaktet
  4 - përfundo programin

Programi duhet të përdorë klasa, pointerë dhe memory dinamike.
*/
#include <iostream>
using namespace std;

class Contact
{
public:
    string name;
    string number;

    Contact() {}

    Contact(string _name, string _number)
    {
        name = _name;
        number = _number;
    }

    void print()
    {
        cout << "Emri: " << name << " - ";
        cout << "Numri: " << number << endl;
    }
};

class Phonebook
{
    string name;
    int capacity;
    int count;
    Contact *contacts = nullptr;

public:
    Phonebook(int _capacity)
    {
        count = 0;
        int capacity = _capacity;
        contacts = new Contact[_capacity];
    }

    void add()
    {
        cout
            << "Vendos emrin: ";
        string emri;
        cin >> emri;
        cout << "Vendos numrin: ";
        string numri;
        cin >> numri;

        contacts[count].name = emri;
        contacts[count].number = numri;
        count++;
    }

    void list()
    {
        for (int i = 0; i < count; i++)
        {
            contacts[i].print();
        }
    }

    void edit()
    {
        // gjeje kontaktin
        cout << "Shkruani emrin e kontaktit qe doni ta ndryshoni: ";
        string name;
        cin >> name;
        bool found = false;

        for (int i = 0; i < count; i++)
        {
            if (contacts[i].name == name)
            {
                // edit
                cout << "Vendosni numrin e ri: ";
                cin >> contacts[i].number;
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << "Nuk u gjet" << endl;
        }
    }
};

int main()
{
    int capacity;
    cout << "Shtypni madhesin e phonebook: ";
    cin >> capacity;

    Phonebook phonebook(capacity);

    while (true)
    {
        cout << "---------------------- \n Zgjidhni opsionin: \n 1 - fut \n 2 - edit \n 3 - listo \n 4 - perfundo \n Opsioni: ";

        int option;
        cin >> option;

        cout << "---------------------- \n";

        switch (option)
        {
        case 1:
            phonebook.add();
            break;
        case 2:
            phonebook.edit();
            break;
        case 3:
            phonebook.list();
            break;
        case 4:
            return 0;
        }
    }

    return 0;
}