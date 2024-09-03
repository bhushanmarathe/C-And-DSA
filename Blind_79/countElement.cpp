#include <bits/stdc++.h>
using namespace std;

/*int majorityElement(vector<int> v)
{

    // size of the given array:
    int n = v.size();

    for (int i = 0; i < n; i++)
    {
        // selected element is v[i]
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            // counting the frequency of v[i]
            if (v[j] == v[i])
            {
                cnt++;
            }
        }

        // check if frquency is greater than n/2:
        if (cnt > (n / 2))
            return v[i];
    }

    return -1;
}*/

/*int majorityElement(vector<int> v)
{
    int count = 0;

    map<int, int> mpp;

    for (int i = 0; i < v.size(); i++)
    {
        mpp[v[i]]++;
    }

    for (auto it : mpp)
    {
        if (it.second > (v.size() / 2))
        {
            return it.first;
        }
    }
    return -1;
}*/

int majorityElement(vector<int> v)
{
    int count = 0;

    int n = v.size();

    int el;

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            count = 1;
            el = v[i];
        }
        else if (el == v[i])
            count++;
        else
            count--;
    }

    int count_1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == el)
            count_1++;
    }
    if (count_1 > (n / 2))
        return el;
    return -1;
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}
