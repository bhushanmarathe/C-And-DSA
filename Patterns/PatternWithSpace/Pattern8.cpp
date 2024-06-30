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
        int space = n - i;
        for (int k = 1; k <= space; k++)
        {
            cout << " ";
        }
        // int star = n - i + 1;
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }

        int start = i - 1;

        // for (int k = n - i + j; k <= start; k++)
        // {
        //     cout << k;
        // }

        while (start)
        {
            /* code */
            cout << start;
            start--;
        }

        cout << endl;
    }
}