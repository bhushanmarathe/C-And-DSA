#include <bits/stdc++.h>

using namespace std;

bool isPossibleSolution(vector<int> &stalls, int k, int mid)
{
    int cowCount = 1;
    int lastPosition = stalls[0];

    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i] - lastPosition >= mid)
        {
            cowCount++;

            if (cowCount == k)
            {
                return true;
            }

            lastPosition = stalls[i];
        }
    }

    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int start = 0;
    int maxi = -1;
    int ans = -1;

    for (int i = 0; i < stalls.size(); i++)
    {
        maxi = max(maxi, stalls[i]);
    }

    int end = maxi;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (isPossibleSolution(stalls, k, mid))
        {
            ans = mid;
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3};

    vector<int> arr1 = {4, 2, 1, 3, 6};

    int k;

    cin >> k;

    cout << "Aggressive Cows : " << aggressiveCows(arr, k) << endl;

    cout << "Aggressive Cows : " << aggressiveCows(arr1, k) << endl;

    return 0;
}