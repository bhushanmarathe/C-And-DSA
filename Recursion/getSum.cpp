#include <bits/stdc++.h>

using namespace std;

int getSum(int arr[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    int remain = getSum(arr + 1, size - 1);
    int sum = arr[0] + remain;

    return sum;
}

int main()
{
    int arr[5] = {2, 4, 9, 9, 9};
    int size = 5;

    int ans = getSum(arr, size);

    cout << ans << endl;
}