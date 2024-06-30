#include <bits/stdc++.h>

using namespace std;

void sol1(int &n)
{
    for (int i = 1; i <= n; i++)
    {
        // int count = i;
        for (int j = 1; j <= i; j++)
        {
            cout << i + j - 1 << " ";
            // count++;
        }

        cout << endl;
    }
}

void sol2(int &n)
{
    for (int i = 1; i <= n; i++)
    {
        int count = i;
        for (int j = 1; j <= i; j++)
        {
            cout << i + j - 1 << " ";
            count++;
        }

        cout << endl;
    }
}

int main()
{
    int n;

    cin >> n;

    sol1(n);
    sol2(n);
}