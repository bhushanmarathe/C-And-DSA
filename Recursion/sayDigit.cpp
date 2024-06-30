#include <bits/stdc++.h>

using namespace std;

void sayDigit(int &n, vector<string> &arr)
{
    if (n == 0)
        return;

    int digit = n % 10;
    n = n / 10;

    sayDigit(n, arr);

    cout << arr[digit] << " ";
}

int main()
{
    int n;
    vector<string> arr = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    cin >> n;
    sayDigit(n, arr);
    // return 0;
}