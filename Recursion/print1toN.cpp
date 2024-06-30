#include <bits/stdc++.h>

using namespace std;

int print(int i, int n)
{
    if (i > n)
        return i;
    cout << i << " ";
    print(i + 1, n);
}

int printNew(int i, int n)
{
    if (i > n)
        return i;
    cout << i << " ";
    print(i - 1, n);
}

int main()
{
    int n;
    cin >> n;

    print(1, n);
    cout << endl;
    printNew(n, n);
}