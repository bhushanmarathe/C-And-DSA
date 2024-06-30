#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    char start = 'A';

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            char ch = start + (n - (i - j + 1));
            // char ch = start + (n - j);
            cout << ch << " ";
            // start++;
        }
        cout << endl;
    }
}