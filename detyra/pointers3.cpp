// 4. Numërimi i elementeve çift dhe tek

// Defino funksionin numerimi, i cili pranon:

// një varg me n numra
// pointer për numrin e elementeve çift
// pointer për numrin e elementeve tek
// Funksioni duhet të kthejë dy rezultate përmes pointerëve.

#include <iostream>
using namespace std;

void numerimi(int *arr, int n, int *cift, int *tek)
{
    *cift = 0;
    *tek = 0;

    for(int i = 0; i < n; i++)
    {
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
    int arr[] = {2, 7, 4, 9, 10, 3};
    int n = 6;

    int cift;
    int tek;

    numerimi(arr, n, &cift, &tek);

    cout << "Cift = " << cift << endl;
    cout << "Tek = " << tek << endl;

    return 0;
}

// 5. Shuma dhe mesatarja

// Defino funksionin llogarit, i cili pranon një varg
// dhe duhet të kthejë përmes pointerëve:
// shumën
// mesataren

#include <iostream>
using namespace std;

void llogarit(int *arr, int n, int *shuma, double *mesatarja)
{
    *shuma = 0;

    for(int i = 0; i < n; i++)
    {
        *shuma += arr[i];
    }

    *mesatarja = (double)*shuma / n;
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = 4;

    int shuma;
    double mesatarja;

    llogarit(arr, n, &shuma, &mesatarja);

    cout << "Shuma = " << shuma << endl;
    cout << "Mesatarja = " << mesatarja << endl;

    return 0;
}

// 6. Ndrysho të gjithë elementet e vargut

// Defino funksionin dyfisho, i cili pranon një varg dhe numrin e elementeve.

// Funksioni duhet ta dyfishojë çdo element të vargut përmes pointerit.

// Këtu mos përdor varg të ri. Ndryshoje vargun ekzistues.

#include <iostream>
using namespace std;

void llogarit(int *arr, int n, int *shuma, double *mesatarja)
{
    *shuma = 0;

    for(int i = 0; i < n; i++)
    {
        *shuma += arr[i];
    }

    *mesatarja = (double)*shuma / n;
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = 4;

    int shuma;
    double mesatarja;

    llogarit(arr, n, &shuma, &mesatarja);

    cout << "Shuma = " << shuma << endl;
    cout << "Mesatarja = " << mesatarja << endl;

    return 0;
}