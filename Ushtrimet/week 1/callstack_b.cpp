
#include <iostream>
using namespace std;

int shuma(int *a, int x)
{
    *a = 6;
    int c = 100;

    return *a + x + c;
}

int main()
{
    int a;
    a = 5;
    int b = 10;

    int *pointerA = &a;

    *pointerA = 16;

    shuma(pointerA, b);

    return 0;
}