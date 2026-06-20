/*
Detyrë:

Të krijohet funksioni:

void faktorieli(int n, int *res)

Funksioni duhet të:
- pranojë një numër të plotë n dhe një pointer të tipit int
- llogarisë faktorielin e numrit n
- ruajë rezultatin në adresën e pranuar përmes pointerit
- krijojë dinamikisht një variabël të tipit int brenda funksionit

Në funksionin main():
- alokoni dinamikisht një variabël të tipit int për ruajtjen e rezultatit
- thirrni funksionin faktorieli() për numrin 5
- shfaqni faktorielin e llogaritur në ekran

Në fund, programi duhet të përdorë pointerë për kthimin e rezultatit të
faktorielit dhe të demonstrojë përdorimin e memories dinamike.
*/
#include <iostream>
using namespace std;

void faktorieli(int n, int *res)
{
    int f = 1;
    for (int i = n; i > 0; i--)
    {
        f *= i;
    }

    *res = f;

    int *testp = new int;
}

int main()
{
    int *result = new int;

    faktorieli(5, result);

    cout << "Result: " << *result << endl;

    return 0;
}