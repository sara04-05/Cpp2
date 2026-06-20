/*
Detyrë:

Të shkruhet program në C++ që përdor stack.

- krijohet stack me funksion krijoStack(a, b, c)
- futen numra nga përdoruesi, pranohen vetëm ata në interval (b, c)
- mblidhen saktë a elemente

- funksioni stackEdges:
  * gjen elementin e parë (top)
  * gjen elementin e fundit duke bërë pop

Në main():
- krijohet stack
- shfaqen elementet e parë
- shfaqen elementi i parë dhe i fundit
*/
#include <iostream>
#include <stack>
using namespace std;

stack<int> krijoStack(int a, int b, int c)
{
    stack<int> stk;

    while (stk.size() < a)
    {
        int x;
        cout << "Vendose nje numer: ";
        cin >> x;

        if (x > b && x < c)
        {
            stk.push(x);
        }
    }

    return stk;
}

int stackEdges(stack<int> stk, int &rez)
{
    rez = stk.top();

    while (stk.size() > 1)
    {
        stk.pop();
    }

    return stk.top();
}

int main()
{
    stack<int> st = krijoStack(10, 12, 43);

    cout << "I pari" << st.top() << endl;
    st.pop();
    cout << "I dyti" << st.top() << endl;

    int front;
    int back = stackEdges(st, front);

    cout << "I pari" << front << endl;
    cout << "I fundit" << back << endl;

    return 0;
}