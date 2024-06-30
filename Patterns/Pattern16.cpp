#include <bits/stdc++.h>

using namespace std;

void sol1(int &n, char &start)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << start << " ";
        }

        start++;

        cout << endl;
    }
}

void sol2(int &n, char &start)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char ch = start + i - 1;
            cout << ch << " ";
        }

        cout << endl;
    }
}

int main()
{
    int n;

    char start = 'A';
    cin >> n;

    // sol1(n, start);
    cout << endl;
    sol2(n, start);
}