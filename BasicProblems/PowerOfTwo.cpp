#include <bits/stdc++.h>

using namespace std;

bool powerOfTwo(int &n)
{
    for (int i = 0; i < 30; i++)
    {
        int ans = pow(2, i);

        if (ans == n)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int n;

    cin >> n;

    bool ans = powerOfTwo(n);

    cout << ans;
}