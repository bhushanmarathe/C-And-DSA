#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int i = 1;
    int j = 1;
    int count = 1;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        int space = i - 1;
        for (int k = 1; k <= space; k++)
        {
            cout << " ";
        }
        for (j = i; j <= n; j++)
        {
            cout << j;
        }
        // count++;
        cout << endl;
    }
}