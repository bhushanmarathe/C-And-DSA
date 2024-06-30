#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    while(t--)
    {
        int n, k;

        cin >> n >> k;

        multiset<long> m;

        for(int i = 0; i < n; i++)
        {
            int candy;

            cin >> candy;

            m.insert(candy);
        }

        long long totalCandies = 0;
        for(int i = 0; i < k; i++)
        {
            auto candy = --m.end();
            auto lastCandy = *candy;
            totalCandies += lastCandy;
            m.erase(candy);
            m.insert(lastCandy / 2);
        }
        cout << totalCandies << endl;
    }

    

    return 0;
}