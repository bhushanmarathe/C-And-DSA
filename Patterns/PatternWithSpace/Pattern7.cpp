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
        int space = n - i + 1;
        for (int k = 1; k <= space; k++)
        {
            cout << " ";
        }
        // int star = n - i + 1;
        for (j = 1; j <= i; j++)
        {
            cout << count;
            count++;
        }
        // count++;
        cout << endl;
    }
}