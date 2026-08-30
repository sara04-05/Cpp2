
// 7. Ktheje vargun mbrapsht
// Defino funksionin:
// void reverse(int *arr, int n)
// që e kthen vargun në rend të kundërt duke përdorur vetëm pointera.
// Kusht: Mos përdor array tjetër.

#include <iostream>
using namespace std;

void reverse(int *arr, int n)
{
    int temp;

    for(int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    reverse(arr, 5);

    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}


// 8. Gjej pozitën e numrit
// Defino funksionin:
// void kerko(int *arr, int n, int x, int *pozita)

// Funksioni duhet të kërkojë x në varg dhe të kthejë pozitën përmes pointerit.
// Nëse numri nuk ekziston:
// pozita = -1

#include <iostream>
using namespace std;

void kerko(int *arr, int n, int x, int *pozita)
{
    *pozita = -1;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x)
        {
            *pozita = i;
            break;
        }
    }
}

int main()
{
    int arr[] = {4, 8, 2, 15, 6};

    int pozita;

    kerko(arr, 5, 15, &pozita);

    cout << "Pozita = " << pozita << endl;

    return 0;
}

// 9. Ndrysho numrin më të madh
// Defino funksionin që gjen elementin më të madh të një vargu dhe pastaj e zëvendëson atë me 0.
// Kusht: Pozita e maksimumit duhet të gjendet duke përdorur pointera.

#include <iostream>
using namespace std;

void ndryshoMaksimumin(int *arr, int n)
{
    int pozita = 0;

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > arr[pozita])
        {
            pozita = i;
        }
    }

    arr[pozita] = 0;
}

int main()
{
    int arr[] = {4, 8, 2, 15, 6};

    ndryshoMaksimumin(arr, 5);

    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}