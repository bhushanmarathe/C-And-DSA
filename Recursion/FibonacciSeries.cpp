#include <bits/stdc++.h>

using namespace std;

void fibo(int n)
{
    // nth fibonacci number
    //  if (n == 0)
    //      return 0;
    //  if (n == 1)
    //      return 1;

    // return fibo(n - 1) + fibo(n - 2);
    // ###############################################################################
    //  print series = n
    int first = 0;
    int second = 1;
    int third = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << first << " ";
            continue;
        }

        if (i == 2)
        {
            cout << second << " ";
            continue;
        }

        third = first + second;
        first = second;
        second = third;

        cout << third << " ";
    }
    // return 0;
}

int nthFibNumber(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return nthFibNumber(n - 1) + nthFibNumber(n - 2);
}

int main()
{
    int n;
    cin >> n;

    fibo(n);

    // cout << nthFibNumber(n) << endl;
    //   return 0;
}