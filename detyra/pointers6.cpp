// 13. Fshije një element nga vargu
// Përdor pointera për të zhvendosur elementet.

#include <iostream>
using namespace std;

void fshij(int *arr, int *n, int pozita)
{
    for(int i = pozita; i < *n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    (*n)--;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    fshij(arr, &n, 2);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// 14. Alokim dinamik 🔥

// Në main() kërko nga përdoruesi n.
// Pastaj krijo dinamikisht një varg:
// int *arr = new int[n];
// Lexo elementet dhe defino funksionin:
// void statistika(int *arr, int n, int *min, int *max, int *sum)
// që përmes 3 pointerëve kthen:

// minimumin
// maksimumin
// shumën

// Në fund liro memorien me:
// delete[] arr;

#include <iostream>
using namespace std;

void statistika(int *arr, int n, int *min, int *max, int *sum)
{
    *min = arr[0];
    *max = arr[0];
    *sum = 0;

    for(int i = 0; i < n; i++)
    {
        *sum += arr[i];

        if(arr[i] < *min)
        {
            *min = arr[i];
        }

        if(arr[i] > *max)
        {
            *max = arr[i];
        }
    }
}

int main()
{
    int n;

    cout << "Sa numra: ";
    cin >> n;

    int *arr = new int[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int minimum;
    int maksimum;
    int shuma;

    statistika(arr, n, &minimum, &maksimum, &shuma);

    cout << "Minimumi = " << minimum << endl;
    cout << "Maksimumi = " << maksimum << endl;
    cout << "Shuma = " << shuma << endl;

    delete[] arr;

    return 0;
}

// 15. Defino funksionin:

// void analizo(int *arr, int n, int *min, int *max, int *cift, int *tek)
// Funksioni duhet të analizojë një varg dhe të kthejë 4 rezultate përmes pointerëve:
// Minimumi
// Maksimumi
// Numri i elementeve çift
// Numri i elementeve tek

#include <iostream>
using namespace std;

void analizo(
    int *arr,
    int n,
    int *min,
    int *max,
    int *cift,
    int *tek
)
{
    *min = arr[0];
    *max = arr[0];
    *cift = 0;
    *tek = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] < *min)
        {
            *min = arr[i];
        }

        if(arr[i] > *max)
        {
            *max = arr[i];
        }

        if(arr[i] % 2 == 0)
        {
            (*cift)++;
        }
        else
        {
            (*tek)++;
        }
    }
}

int main()
{
    int arr[] = {7, 2, 10, 5, 8, 3};

    int minimum;
    int maksimum;
    int cift;
    int tek;

    analizo(
        arr,
        6,
        &minimum,
        &maksimum,
        &cift,
        &tek
    );

    cout << "Minimumi = " << minimum << endl;
    cout << "Maksimumi = " << maksimum << endl;
    cout << "Cift = " << cift << endl;
    cout << "Tek = " << tek << endl;

    return 0;
}

