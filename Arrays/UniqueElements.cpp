#include <bits/stdc++.h>

using namespace std;

int findUniqueElement(int arr[], int n)
{
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    // cout << endl;
}

int main()
{
    int arr[7] = {2, 3, 1, 6, 3, 6, 2};
    int arr1[5] = {2, 4, 7, 2, 7};
    int arr2[9] = {1, 3, 1, 3, 6, 6, 7, 10, 7};

    cout << findUniqueElement(arr, 7) << endl;
    cout << findUniqueElement(arr1, 5) << endl;
    cout << findUniqueElement(arr2, 9) << endl;
    // printArray(arr, 10);
}