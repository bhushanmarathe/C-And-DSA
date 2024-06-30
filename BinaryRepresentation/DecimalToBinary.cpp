#include <bits/stdc++.h>
#include <math.h>

using namespace std;

// int main()
//{
//  int n;

// cin >> n;

// int i = 0;
// int ans = 0;

// // while (n != 0) // for positive number
// // {
// //     int bit = n & 1;
// //     ans = (bit * pow(10, i)) + ans;

// //     n = n >> 1;
// //     i++;
// // }

// // For Negative Number
// if (n >= 0)
// {
//     while (n != 0)
//     {
//         int bit = n & 1;
//         ans = (bit * pow(10, i)) + ans;

//         n = n >> 1;
//         i++;
//     }
// }
// else
// {
//     n = -n;

//     while (n != 0)
//     {
//         int bit = n & 1;
//         ans = (bit * pow(10, i)) + ans;

//         n = n >> 1;
//         i += 1;
//     }

//     ans = ~ans;
//     ans += 1;
//     ans = -ans;
// }

// cout << ans;

/// Function to calculate binary of positve integer
int Decimal_to_Binary(int n)
{
    int answer = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        answer = (pow(10, i) * bit) + answer;
        n = n >> 1;
        i += 1;
    }
    return answer;
}

/// Function to calculate binary of negative integer
int Binary_of_Negative(int n)
{
    n = abs(n);
    int bin = Decimal_to_Binary(n);

    // storing binary in an array
    int arr[32] = {0};
    int i = 1;
    while (n != 0)
    {
        int bit = n & 1;
        n = n >> 1;
        arr[32 - i] = bit;
        i += 1;
    }
    // Taking 2s compliment
    bool check = false;
    int first_bit = -1;
    // Starting loop from right to left
    for (int i = 31; i >= 0; i--)
    {
        if (check == false && arr[i] == 1)
        { // look for the first 1
            check = true;
            first_bit = i;
        }
        if (first_bit != i && check == true)
        { // First 1 has been found, invert all the other bits
            if (arr[i] == 0)
            { // Inverting bits
                arr[i] = 1;
            }
            else
            {
                arr[i] = 0;
            }
        }
    }
    int ans = 0;
    for (int i = 24; i < 32; i++) // Representing answer in 8 bit format, because we cannot store full number in integer
        ans = ans * 10 + arr[i];

    return ans;
}

int main()
{
    int n;
    cin >> n;

    if (n >= 0)
    {
        cout << Decimal_to_Binary(n);
    }
    else
    {

        cout << Binary_of_Negative(n);
    }
}

//}