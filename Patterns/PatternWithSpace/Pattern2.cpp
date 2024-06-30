#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int i = 1;
    int j = 1;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        int star = n - i + 1;
        for (j = 1; j <= star; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}