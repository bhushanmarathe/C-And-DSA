#include <bits/stdc++.h>

using namespace std;

int print(int i, int n)
{
    if (i < 1)
        return i;
    print(i - 1, n);
    cout << i << " ";
}

int printNew(int i, int n)
{
    if (n < i)
        return i;
    printNew(i + 1, n);
    cout << i << " ";
}

int main()
{
    int n;
    cin >> n;

    // print(n, n);
    // cout << endl;
    printNew(1, n);
}