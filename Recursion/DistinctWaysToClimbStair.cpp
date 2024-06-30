#include <bits/stdc++.h>

using namespace std;

int distinctWaysToClimbStair(long long nstairs)
{
    if (nstairs == 0)
        return 1;
    if (nstairs < 0)
        return 0;

    return distinctWaysToClimbStair(nstairs - 1) + distinctWaysToClimbStair(nstairs - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << distinctWaysToClimbStair(n) << endl;
    // return 0;
}