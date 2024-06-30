#include <bits/stdc++.h>

using namespace std;

void reverseArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << endl;
}

void sortAfterParticularIndex(int arr[], int n, int m)
{
    int start = m + 1;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << endl;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // reverseArray(arr, 10);
    sortAfterParticularIndex(arr, 10, 3);
    printArray(arr, 10);
}