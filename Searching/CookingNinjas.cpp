#include <bits/stdc++.h>

using namespace std;

bool isPossibleSolution(vector<int> &arr, int mid, int dish)
{
    int time = 0;
    int dishCount = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        time = arr[i];
        int j = 2;

        while (time <= mid)
        {
            dishCount++;
            time = time + (arr[i] * j);
            j++;
        }

        if (dishCount >= dish)
            return 1;
    }

    return 0;
}

int MinimumDish(vector<int> &arr, int dish)
{
    int start = 0;

    int ans = -1;

    int sum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }

    int end = sum;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (isPossibleSolution(arr, mid, dish))
        {
            ans = mid;
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

int main()
{
    // vector<int> arr = {20, 15, 10, 17};
    vector<int> arr1 = {1, 2, 3, 4};
    int n, dish;

    // cin >> dish;

    cout << "Minimum time required to complete dishes : " << MinimumDish(arr1, 11) << endl;
}