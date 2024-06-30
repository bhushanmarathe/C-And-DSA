#include <bits/stdc++.h>

using namespace std;

int fib(int n, vector<int> &dp) // Using memoization
{
    if (n <= 1)
        return n;

    if (dp[n] != -1) // step 3
        return dp[n];

    dp[n] = fib(n - 1, dp) + fib(n - 2, dp); // step2
    return dp[n];
}

int fibUsingTabulation(int n, vector<int> &dp) // Using tabulation
{
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}
int main()
{
    int n;

    // cin >> n;
    n = 2;

    vector<int> dp(n + 1); // step 1

    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }
    cout << "Memoization : " << fib(n, dp) << endl;
    cout << "Tabulation : " << fibUsingTabulation(n, dp) << endl;
    return 0;
}