#include <bits/stdc++.h>

using namespace std;

void printArray(int *arr, int size, int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void mergeVector(int *arr, int start, int end)
{
    printArray(arr, 10, start, end);
    int mid = start + (end - start) / 2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // Copy values in new array
    int mainIndexArray = start;

    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainIndexArray];
    }

    mainIndexArray = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainIndexArray];
    }

    // merge 2 sorted arrays

    int index1 = 0;
    int index2 = 0;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainIndexArray++] = first[index1++];
        }
        else
        {
            arr[mainIndexArray++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainIndexArray++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[mainIndexArray++] = second[index2++];
    }
}

void mergeSort(int *arr, int start, int end)
{
    printArray(arr, 10, start, end);
    if (start >= end)
        return;

    int mid = start + (end - start) / 2;

    mergeSort(arr, start, mid);

    mergeSort(arr, mid + 1, end);

    mergeVector(arr, start, mid - 1);
}

int main()
{
    int arr[10] = {0, 9, 1, 8, 2, 7, 3, 6, 4, 5};
    mergeSort(arr, 0, 10);

    for (auto i : arr)
    {
        cout << (arr[i]) << " ";
    }
    cout << endl;
    return 0;
}