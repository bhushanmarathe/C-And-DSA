#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    int sum = 0;

    int lastDigit = 0;

    cin >> n;

    int dup = n;

    while (n > 0)
    {
        /* code */
        lastDigit = n % 10;
        sum = sum + (lastDigit * lastDigit * lastDigit);
        n = n / 10;
    }

    cout << sum << endl;

    if (sum == dup)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}