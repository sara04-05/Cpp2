/*
Detyrë:

Të shkruhet një program në gjuhën programuese C++ që implementon një
libër kontaktesh (Phonebook) duke përdorur klasa dhe memory dinamike.

Programi duhet të përmbajë:

KLASA Contact:
- atributet:
  - name (string)
  - number (string)
  - email (string)

- konstruktor default dhe konstruktor me parametra
- funksion print() që shfaq emrin dhe numrin e kontaktit

KLASA Phonebook:
- atributet:
  - name (string)
  - contacts (pointer dinamik i tipit Contact)
  - size (numri aktual i kontakteve)

- konstruktor:
  - pranon emrin e phonebook dhe kapacitetin
  - inicializon size në 0
  - alokon memorien dinamike për kontaktet

- funksionet:
  - add():
    * shton një kontakt të ri (emër dhe numër)
    * e ruan në vargun dinamik

  - list():
    * shfaq të gjitha kontaktet e ruajtura

  - edit():
    * kërkon kontakt sipas emrit
    * nëse gjendet, lejon ndryshimin e numrit
    * nëse nuk gjendet, shfaq "Nuk u gjet"

Në funksionin main():
- kërkohet nga përdoruesi kapaciteti i phonebook
- krijohet objekti Phonebook me emrin "School"
- programi punon me menu:
  1 - shto kontakt
  2 - edito kontakt
  3 - listo kontaktet
  4 - përfundo programin

Programi duhet të përdorë:
- klasa
- pointerë
- memory dinamike (new)
*/
#include <iostream>
using namespace std;

class Contact
{
public:
    string name;
    string number;
    string email;

    Contact() {}

    Contact(string _name, string _number)
    {
        name = _name;
        number = _number;
    }

    void print()
    {
        cout << "Emri: " << name << " - " << "Numri: " << number << endl;
    }
};

class Phonebook
{
    string name;
    Contact *contacts;
    int size;

public:
    Phonebook(string name, int capacity)
    {
        this->size = 0;
        this->name = name;
        this->contacts = new Contact[10];
    }

    void add()
    {
        cout << "Vendose emrin e kontaktit te ri: ";
        cin >> contacts[size].name;
        cout << "Vendose numrin: ";
        cin >> contacts[size].number;
        size++;
    }

    void list()
    {
        for (int i = 0; i < this->size; i++)
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

        for (int i = 0; i < size; i++)
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
    int phonebook_capacity;

    cout << "Vendoese kapacitetin e phonebook: ";
    cin >> phonebook_capacity;

    Phonebook pb("School", phonebook_capacity);
    // Phonebook *pbHeap = new Phonebook("School", phonebook_capacity);

    while (true)
    {
        cout << "---------------------- \n";
        cout << "Zgjidhni opsionin: \n 1 - fut \n 2 - edit \n 3 - listo \n 4 - perfundo \n";
        cout << "Opsioni: ";

        int option;
        cin >> option;

        cout << "---------------------- \n";

        switch (option)
        {
        case 1:
            pb.add();
            break;
        case 2:
            pb.edit();
            break;
        case 3:
            pb.list();
            break;
        case 4:
            return 0;
        }
    }

    return 0;
}