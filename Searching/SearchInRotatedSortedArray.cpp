#include <bits/stdc++.h>

using namespace std;

// int Pivot(vector<int> &arr, int n) // 1st approach
// {
//     int start = 0, end = n - 1, mid = start + (end - start) / 2;

//     while (start < end)
//     {
//         /* code */

//         if (arr[mid] >= arr[0])
//         {
//             start = mid + 1;
//         }

//         else
//         {
//             end = mid;
//         }

//         mid = start + (end - start) / 2;
//     }

//     return start;
// }

int Pivot(vector<int> &arr, int n) // 2nd approach
{
    int start = 0, end = n - 1, mid = start + (end - start) / 2;

    while (start < end)
    {
        /* code */

        if (arr[mid] < arr[n - 1])
        {
            end = mid;
        }

        else if (arr[mid] > arr[n - 1])
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return start;
}

int BinarySearch(vector<int> &arr, int s, int e, int key)
{
    int start = s, end = e, mid = start + (end - start) / 2;

    while (start <= end)
    {
        /* code */

        if (key == arr[mid])
        {
            return mid;
        }

        else if (key > arr[mid])
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

int findPosition(vector<int> &arr, int n, int key)
{
    int pivot = Pivot(arr, n);

    if (key >= arr[pivot] && key <= arr[n - 1])
    {
        return BinarySearch(arr, pivot, n - 1, key); // BS on second line
    }

    else
    {
        return BinarySearch(arr, 0, pivot - 1, key); // BS on first line
    }
}

int main()
{
    vector<int> arr = {8, 9, 4, 5};

    vector<int> arr1 = {2, 4, 5, 6, 8, 9, 1};

    cout << "Element : " << findPosition(arr, 4, 3) << endl;
    cout << "Element : " << findPosition(arr1, 7, 2) << endl;

    return 0;
}