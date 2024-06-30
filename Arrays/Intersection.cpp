#include <bits/stdc++.h>

using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> ans;

    // Solution 1 -> TLE -> O(n^m)

    // for (int i = 0; i < n; i++)
    // {
    //     int element = arr1[i];

    //     for (int j = 0; j < m; j++)
    //     {
    //         if (element < arr2[j])
    //             break;

    //         if (element == arr2[j])
    //         {
    //             ans.push_back(element);
    //             arr2[j] = INT_MIN;
    //             break;
    //         }
    //     }

    // Solution 2 -> O(max(n^m))

    int i = 0;
    int j = 0;

    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }

        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    for (int k = 0; k < ans.size(); k++)
    {
        cout << ans[k] << " ";
    }
}

int main()
{
    vector<int> arr = {1, 2, 2, 2, 3, 4};
    vector<int> arr1 = {2, 2, 3, 3};

    vector<int> arr2 = {3};
    vector<int> arr3 = {6};

    findArrayIntersection(arr, arr.size(), arr1, arr1.size());
}