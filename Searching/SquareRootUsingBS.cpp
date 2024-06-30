#include <bits/stdc++.h>

using namespace std;

long long int mySqrt(long long int n)
{
    long long int start = 0, end = n, mid = start + (end - start) / 2, ans = -1;

    while (start <= end)
    {
        long long int square = (mid * mid);

        if (square == n)
        {
            return mid;
        }

        if (square < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

double morePrecision(int n, int precise, int tempSol)
{
    double factor = 1;
    double ans = tempSol;

    for (double i = 0; i < precise; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }

    return ans;
}

int main()
{
    long long int n;
    cin >> n;

    int tempSol = mySqrt(n);

    // cout << tempSol << endl;

    cout << "SQRT : " << morePrecision(n, 3, tempSol) << endl;
    return 0;
}