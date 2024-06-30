#include <bits/stdc++.h>

using namespace std;

int Pivot(vector<int> &arr, int n)
{
    int start = 0, end = n - 1, mid = start + (end - start) / 2;

    while (start < end)
    {
        /* code */

        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }

        else
        {
            end = mid;
        }

        mid = start + (end - start) / 2;
    }

    return start;
}

int main()
{
    // vector<int> arr = {1,2,3,4,5,6,7,8,9};
    vector<int> arr = {8, 9, 1, 2, 3, 4, 5, 6, 7};
    cout << "Pivot Element : " << Pivot(arr, 8) << endl;

    return 0;
}