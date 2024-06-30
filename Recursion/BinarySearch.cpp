#include <bits/stdc++.h>

using namespace std;

// bool isSorted(int arr[], int size) // sorted or not
// {
//     if (size == 0 || size == 1)
//         return true;
//     if (arr[0] > arr[1])
//         return false;
//     else
//     {
//         bool remainingPart = isSorted(arr + 1, size - 1);
//         return remainingPart;
//     }
// }

// int sumOfArray(int arr[], int &size) // sum of array elements
// {
//     if (size == 0)
//         return 0;

//     if (size == 1)
//         return arr[0];
//     else
//     {
//         // int sum = arr[size - 1] + sumOfArray(arr, size - 1);
//         int remainingPart = sumOfArray(arr + 1, size - 1);
//         int sum = arr[0] + remainingPart;
//         return sum;
//     }
// }

void printArray(int *arr, int size, int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarySearch(int *arr, int start, int end, int size, int key)
{
    printArray(arr, size, start, end);
    if (start > end)
        return false;

    int mid = start + (end - start) / 2;

    cout << "Mid : " << arr[mid] << endl;

    if (arr[mid] == key)
        return true;
    else if (key > arr[mid])
    {
        return binarySearch(arr, mid + 1, end, size, key);
    }
    else
    {
        return binarySearch(arr, start, mid - 1, size, key);
    }
}

int main()
{
    int arr[11] = {2, 6, 10, 14, 16, 22, 78, 66, 45, 77, 98};
    cout << binarySearch(arr, 0, 11, 11, 98) << endl;
    // cout << sumOfArray(v, 5) << endl;

    // bool ans = isSorted(v, 5);

    // if (ans)
    // {
    //     cout << "Sorted" << endl;
    // }

    // else
    // {
    //     cout << "Not" << endl;
    // }
}