#include <bits/stdc++.h>

using namespace std;

void Method1(int &n1, int &n2)
{
    int gcd = 1;
    for (int i = 1; i <= min(n1, n2); i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            // cout << i << " ";
            gcd = i;
        }
    }

    cout << gcd << endl;
}

void Method2(int &n1, int &n2)
{
    int gcd = 1;
    for (int i = min(n1, n2); i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            // cout << i << " ";
            gcd = i;
            break;
        }
    }

    cout << gcd << endl;
}

void Method3(int &n1, int &n2)
{
    int gcd = 1;

    for (int i = 1; i <= n1; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }

    cout << gcd << endl;
}

int main()
{
    int n1, n2;

    cin >> n1 >> n2;

    Method1(n1, n2);

    Method2(n1, n2);

    Method3(n1, n2);

    return 0;
}