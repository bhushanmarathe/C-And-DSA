#include <bits/stdc++.h>

using namespace std;

// void print1(int n, char start)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             char ch = start + i + j - 2;
//             cout << ch << " ";
//             // start++;
//         }
//         cout << endl;
//     }
// }

// void print2(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

// void print3(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
// }

// // void print4(int n)
// {
//     for (int i = 1; i <= n; i++) // Method 1
//     {
//         for (int j = i; j <= n; j++)
//         {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }

//     for (int i = 1; i <= n; i++) // Method 2
//     {
//         for (int j = 1; j <= n - i + 1; j++)
//         {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
// }

// void print5(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i + 1; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

void print6(int n)
{
    for (int row = 0; row < n; row++) // space
    {
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }

        int star = 2 * row + 1;

        for (int col = 0; col < star; col++) // star
        {
            cout << "*";
        }

        for (int col = 0; col < n - row - 1; col++) // space
        {
            cout << " ";
        }

        cout << endl;
    }
}

void print7(int n)
{
    for (int row = 0; row < n; row++) // space
    {
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }

        // star

        for (int col = 0; col < 2 * n - (2 * row + 1); col++) // star
        {
            cout << "*";
        }

        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void print8(int n)
{
    for (int row = 0; row <= 2 * n - 1; row++)
    {
        int stars = row;

        if (row > n)
        {
            stars = 2 * n - row;
        }

        for (int col = 0; col < stars; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print9(int n)
{
    int start = 1;
    for (int row = 0; row < n; row++)
    {
        if (row % 2 == 0)
        {
            start = 1;
        }

        else
        {
            start = 0;
        }

        for (int col = 0; col <= row; col++)
        {
            cout << start << " ";
            start = 1 - start;
        }

        cout << endl;
    }
}

void print10(int n)
{
    int space = 2 * (n - 1);
    for (int row = 1; row <= n; row++) // numbers
    {
        for (int col = 1; col <= row; col++)
        {
            cout << col;
        }

        // space

        for (int col = 1; col <= space; col++)
        {
            cout << " ";
        }

        for (int col = row; col >= 1; col--)
        {
            cout << col;
        }

        cout << endl;
        space -= 2;
    }
}

int main()
{
    int n;

    cin >> n;

    print10(n);
}