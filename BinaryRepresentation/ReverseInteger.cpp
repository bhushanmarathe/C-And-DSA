#include <bits/stdc++.h>

using namespace std;

int reverseInteger(int &n)
{
    int rev = 0;
    int digit = 0;
    while (n != 0)
    {
        digit = n % 10;

        if ((rev > INT_MAX / 10) || (rev < INT_MAX / 10)) // if rev is out of range of int
        {
            return 0;
        }
        rev = rev * 10 + digit;
        n /= 10;
    }

    return rev;
}

int main()
{
    int n;

    cin >> n;

    cout << reverseInteger(n);
}