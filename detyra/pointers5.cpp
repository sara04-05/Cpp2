// 10. Ndrysho vlerën përmes pointerit të dyfishtë
// Krijo:
// int a = 5;
// int *p = &a;
// int **pp = &p;

// Defino funksionin:
// void ndrysho(int **pp)
// dhe bëje që a të bëhet 100 vetëm përmes pp.
// Pra brenda funksionit nuk lejohet:
// a = 100;
// Duhet të përdorësh **pp.

#include <iostream>
using namespace std;

void ndrysho(int **pp)
{
    **pp = 100;
}

int main()
{
    int a = 5;

    int *p = &a;

    int **pp = &p;

    ndrysho(pp);

    cout << a << endl;

    return 0;
}

// 11. Dy numra, dy rezultate

// Defino funksionin:
// void kalkulo(int a, int b, int *shuma, int *prodhimi)
// që përmes pointerëve kthen:
// shuma = a + b
// prodhimi = a * b

// Nëse a > b, kthe edhe diferencën përmes një pointeri të tretë.

#include <iostream>
using namespace std;

void kalkulo(int a, int b, int *shuma, int *prodhimi, int *diferenca)
{
    *shuma = a + b;
    *prodhimi = a * b;

    if(a > b){
        int dif= a - b;
        *diferenca = dif;
    };
}

int main()
{
    int a = 5;
    int b = 4;

    int shuma;
    int prodhimi;
    int diferenca ;

    kalkulo(a, b, &shuma, &prodhimi, &diferenca);

    cout << "Shuma = " << shuma << endl;
    cout << "Prodhimi = " << prodhimi << endl;
    cout << "Diferenca = " << diferenca << endl;

    return 0;
}

// 12. Elementi i dytë më i madh

// Defino funksionin:
// void dytiMadh(int *arr, int n, int *rez)
// që gjen numrin e dytë më të madh në një varg dhe e kthen përmes pointerit.
// Mos e sorto vargun. Duhet ta gjesh duke kaluar nëpër elemente

#include <iostream>
using namespace std;

void dytiMadh(int *arr, int n, int *rez)
{
    int madh = arr[0];
    int dyti = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > madh)
        {
            dyti = madh;
            madh = arr[i];
        }
        else if(arr[i] > dyti && arr[i] != madh)
        {
            dyti = arr[i];
        }
    }

    *rez = dyti;
}

int main()
{
    int arr[] = {10, 4, 25, 7, 18};

    int rezultati;

    dytiMadh(arr, 5, &rezultati);

    cout << "I dyti me i madh = " << rezultati << endl;

    return 0;
}