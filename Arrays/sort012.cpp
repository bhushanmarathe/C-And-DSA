#include <bits/stdc++.h>

using namespace std;

void sort012(vector<int> &arr, int n)
{
    vector<int> ans;
    // for (int i = 0; i < n; i++)
    // {
    //     // cout << arr[i] << " ";

    //     if (arr[i] == 0)
    //     {
    //         ans.push_back(arr[i]);
    //     }

    //     if (arr[i] == 1)
    //     {
    //         ans.push_back(arr[i]);
    //     }

    //     if (arr[i] == 2)
    //     {
    //         ans.push_back(arr[i]);
    //     }
    // }

    // sort(arr.begin(), arr.end());

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }

        else if (arr[mid] == 1)
        {
            mid++;
        }

        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> arr = {0, 1, 2, 0, 1, 2, 0, 1, 2};
    vector<int> arr1 = {1, 1, 2, 2, 1, 1};

    sort012(arr, arr.size());
}