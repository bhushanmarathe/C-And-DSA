#include <bits/stdc++.h>

using namespace std;

void print(int i, int sum) // Functiional Method
{
    if (i < 0)
    {
        cout << sum << endl;
        return;
    }
    print(i - 1, sum + i);
}

int printNew(int n)
{
    if (n == 0)
        return 0;

    return n + printNew(n - 1);
}

int main()
{
    int n;

    cin >> n;

    // print(n, 0);
    cout << printNew(n);
}