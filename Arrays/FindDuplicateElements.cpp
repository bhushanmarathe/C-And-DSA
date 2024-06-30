#include <bits/stdc++.h>

using namespace std;

vector<int> findDuplicates(vector<int> &arr)
{
    // Solution 1

    // map<int, int> freqCount;
    // unordered_map<int, int> countfreq;
    // vector<int> ans;

    // for (auto i : arr)
    // {
    //     freqCount[i]++;
    // }

    // for (auto i : freqCount)
    // {
    //     // cout << i.first << "->" << i.second << endl;

    //     if (i.second > 1)
    //     {
    //         ans.push_back(i.first);
    //     }
    // }

    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }

    int ans[10000];

    for (int i = 0; i < arr.size(); i++) // XORing all array elements
    {
        ans = ans ^ arr[i];
    }

    for (int i = 1; i < arr.size(); i++) //[XOr 1..n--1]
    {
        ans = ans ^ i;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << ans[i] << endl;
    }

    // return ans;
}

int main()
{
    vector<int> arr = {4, 3, 2, 7, 8, 2, 3, 1};
    findDuplicates(arr);
}