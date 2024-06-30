#include <bits/stdc++.h>

using namespace std;

void swapAlternate(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n) // to check if the next element is in the array or not
        {
            swap(arr[i], arr[i + 1]);
        }
    }
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
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr1[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};

    swapAlternate(arr, 10);
    printArray(arr, 10);

    cout << endl;

    swapAlternate(arr1, 9);
    printArray(arr1, 9);
}