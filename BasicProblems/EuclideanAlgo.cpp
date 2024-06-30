#include <bits/stdc++.h>

using namespace std;

void Euclidean(int &a, int &b) // O(log(min(a,b)))
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }

        else
        {
            b = b % a;
        }
    }

    if (a == 0)
    {
        cout << b << endl;
    }

    else
    {
        cout << a << endl;
    }
}

int main()
{
    int a, b;

    cin >> a >> b;

    Euclidean(a, b);

    return 0;
}