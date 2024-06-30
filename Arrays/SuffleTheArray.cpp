#include <bits/stdc++.h>

using namespace std;

vector<int> shuffle(vector<int> &nums, int n)
{
    vector<int> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        ans.push_back(nums[i]);
        ans.push_back(n + i);
    }

    return ans;
}

int main()
{
    vector<int> arr = {2, 5, 1, 3, 4, 7};

    vector<int> ans = shuffle(arr, 6);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}