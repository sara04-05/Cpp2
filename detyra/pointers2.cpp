// 1. Ndërrimi i dy numrave
// Të definohet funksioni nderrim,
// i cili pranon dy numra përmes pointerëve dhe ua ndërron vlerat.

#include <iostream>
using namespace std;

void nderrim(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 5;
    int b = 10;

    nderrim(&a, &b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}

// 2. Gjetja e numrit më të madh dhe më të vogël

// Defino funksionin minMax, i cili pranon një varg me numra dhe gjen:

// numrin më të madh
// numrin më të vogël

// Të dy rezultatet duhet të kthehen përmes pointerëve.

#include <iostream>
using namespace std;

void minMax(int *arr, int n, int *min, int *max)
{
    *min = arr[0];
    *max = arr[0];

    for(int i = 1; i < n; i++)
    {
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
    int arr[] = {4, 8, 2, 15, 6};
    int n = 5;

    int minimum;
    int maksimum;

    minMax(arr, n, &minimum, &maksimum);

    cout << "Minimumi = " << minimum << endl;
    cout << "Maksimumi = " << maksimum << endl;

    return 0;
}

// 3. Numri pozitiv, negativ apo zero

// Defino funksionin kontrollo, i cili pranon një numër përmes pointerit dhe 
// përmes një pointeri tjetër kthen:

// 1 → pozitiv
// -1 → negativ
// 0 → zero

// Në main() printo rezultatin.

#include <iostream>
using namespace std;

void kontrollo(int *numri, int *rezultati)
{
    if(*numri > 0)
    {
        *rezultati = 1;
    }
    else if(*numri < 0)
    {
        *rezultati = -1;
    }
    else
    {
        *rezultati = 0;
    }
}

int main()
{
    int numri = -7;
    int rezultati;

    kontrollo(&numri, &rezultati);

    cout << rezultati << endl;

    return 0;
}