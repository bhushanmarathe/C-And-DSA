#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    char start = 'A';

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // char ch = start + (i + j - 2);
            char ch = start + (i + j - 2);
            cout << ch << " ";
        }

        cout << endl;
    }
}