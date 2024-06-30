#include <bits/stdc++.h>

using namespace std;

void notOptimized(int &n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }

    cout << endl;
}

void optimized(int &n)
{
    vector<int> ls;
    for (int i = 1; i * i <= n; i++) // O(sqrt(n))
    {
        if (n % i == 0)
        {
            // cout << i << " ";

            ls.push_back(i);
            //}

            if ((n / i) != i) // -> To check if multiplied by same number
                              //{
                // cout << (n / i) << " ";
                ls.push_back(n / i);
        }
    }

    // O(n log n) -> no of factors * log of no of factors
    sort(ls.begin(), ls.end());

    for (auto it : ls)
    {
        cout << it << " "; // O(no of factors)
    }

    cout << endl;
}

int main()
{
    int n;

    cin >> n;

    notOptimized(n);

    optimized(n);

    return 0;
}