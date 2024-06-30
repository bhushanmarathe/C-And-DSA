#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    int revNum = 0;

    int lastDigit = 0;

    cin >> n;

    int dup = n;

    while (n > 0)
    {
        lastDigit = n % 10;
        revNum = (revNum * 10) + lastDigit;
        n = n / 10;
        /* code */
    }

    cout << revNum << endl;

    if (revNum == dup)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}