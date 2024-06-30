#include <bits/stdc++.h>

using namespace std;

bool isSymmetric(int num)
{                              // function to check if the number is symmetric
    string s = to_string(num); // variable to store the string
    int n = s.length();        // variable to store the length of the string
    if (n % 2 == 1)
        return false; // if the length of the string is odd return false
    int leftSum = 0;  // variable to store the left sum
    int rightSum = 0; // variable to store the right sum
    for (int i = 0; i < n / 2; i++)
    { // loop until i is less than n/2
        leftSum += s[i] - '0';
        cout << "Left Sum: " << leftSum << endl; // update the left sum
        rightSum += s[n - i - 1] - '0';
        cout << "Right Sum: " << rightSum << endl; // update the right sum
    }
    return leftSum == rightSum; // return true if the left sum is equal to the right sum else return false
}

int countSymmetricIntegers(int low, int high)
{
    int res = 0; // variable to store the result
    for (int i = low; i <= high; i++)
    { // loop until i is less than or equal to high
        if (isSymmetric(i))
            res++; // if the number is symmetric increment the result
    }
    return res; // return the result
}

int main()
{
    // int n;

    // cin >> n;

    // string s = to_string(n);

    // cout << s << endl;

    int low, high;

    cin >> low >> high;

    cout << countSymmetricIntegers(low, high);
}