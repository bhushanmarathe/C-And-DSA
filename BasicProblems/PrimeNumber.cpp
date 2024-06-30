#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    bool isPrime = 1;

    cin >> n;

    for (int i = 2; i < n; i++)

    {
        if (n % 2 == 0)
        {
            // cout << "Not prime" << endl;
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 0)
    {
        cout << "Not prime" << endl;
    }

    else
    {
        cout << "Is prime" << endl;
    }
}