#include <bits/stdc++.h>

using namespace std;

void printCount(int n)
{
    if (n == 0)
        return;

    printCount(n - 1);

    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;

    printCount(n);
    // return 0;
}