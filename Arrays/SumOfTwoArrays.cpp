#include <bits/stdc++.h>

using namespace std;

vector<int> reverseVector(vector<int> &ans)
{
    int s = 0;
    int e = ans.size() - 1;

    while (s < e)
    {
        swap(ans[s++], ans[e--]);
    }

    return ans;
}

vector<int> findarraysum(vector<int> a, int n, vector<int> b, int m)
{
    // Approach 1
    //  int i = n - 1;
    //  int j = m - 1;
    //  int carry = 0;

    // vector<int> ans;

    // while (i >= 0 && j >= 0)
    // {
    //     int sum = arr[i] + arr1[j] + carry;

    //     carry = sum / 10;

    //     sum = sum % 10;

    //     ans.push_back(sum);

    //     i--;
    //     j--;
    // }

    // while (i >= 0) // remaining elements of arr
    // {
    //     int sum = arr[i] + carry;

    //     carry = sum / 10;

    //     sum = sum % 10;

    //     ans.push_back(sum);

    //     i--;
    // }

    // while (j >= 0) // remaining elements of arr1
    // {
    //     int sum = arr1[j] + carry;

    //     carry = sum / 10;

    //     sum = sum % 10;

    //     ans.push_back(sum);

    //     j--;
    // }

    // while (carry != 0)
    // {
    //     int sum = carry;

    //     carry = sum / 10;

    //     sum = sum % 10;

    //     ans.push_back(sum);
    // }

    vector<int> ans;
    int mul = 1, i, j, res1 = 0, res2 = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        res1 = res1 + (a[i] * mul);
        mul = mul * 10;
    }
    mul = 1;
    for (int i = m - 1; i >= 0; i--)
    {
        res2 = res2 + (b[i] * mul);
        mul = mul * 10;
    }
    int total = res1 + res2;
    while (total > 0)
    {
        int ele = total % 10;
        ans.push_back(ele);
        total = total / 10;
    }
    // return reverse(ans);

    return reverseVector(ans);
}

int main()
{
    vector<int> arr = {4, 5, 1};
    vector<int> arr1 = {3, 4, 5};

    vector<int> ans = findarraysum(arr, arr.size(), arr1, arr.size());

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    // return 0;
}