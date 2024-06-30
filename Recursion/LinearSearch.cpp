#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[], int n)
{
    cout << "Size : " << n << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool isPresent(int arr[], int size, int key) // present or not
{
    printArray(arr, size);

    if (size == 0)
        return false;

    if (arr[0] == key)
        return true;
    else
    {
        bool remainingPart = isPresent(arr + 1, size - 1, key);
        return remainingPart;
    }
}

int main()
{
    int v[10] = {1, 2, 3, 4, 5};
    int key;
    cin >> key;

    bool ans = isPresent(v, 5, key);

    if (ans)
    {
        cout << "Present" << endl;
    }

    else
    {
        cout << "Not" << endl;
    }
}