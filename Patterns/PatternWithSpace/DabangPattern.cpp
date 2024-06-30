#include <bits/stdc++.h>

using namespace std;

void sol1(int &n, int &row)
{
    while (row <= n) //  1st triangle(12345)
    {
        int col = 1;
        while (col <= n - row + 1)
        {
            cout << col;
            col++;
        }

        int star = 2 * row;
        // int star = row-1;
        while (star) // 2nd triangle(left star)
        {
            cout << "*";
            star--;
        }

        int star1 = 2 * row;
        // int star1 = row - 1;
        while (star1) // 3rd triangle(right star)
        {
            cout << "*";
            star1--;
        }

        int col2 = n - row + 1;
        while (col2) // 4th triangle(54321)
        {
            cout << col2;
            col2--;
        }
        cout << endl;
        row++;
    }
}

void sol2(int &n)
{
    for (int row = 1; row <= n; row++) // 1st trianle(12345)
    {
        for (int col = 1; col <= n - row + 1; col++)
        {
            cout << col;
        }

        int leftStar = row - 1;

        for (int k = 1; k <= leftStar; k++) // 2nd triangle
        {
            cout << "*";
        }

        int rightStar = row - 1;

        for (int l = 1; l <= rightStar; l++) // 3rd trianngle
        {
            cout << "*";
        }

        int col2 = n - row + 1;

        while (col2) // 4th triangle(54321)
        {
            cout << col2;
            col2--;
        }

        cout << endl;
    }
}

int main()
{
    int n;
    int row = 1;
    cin >> n;

    // sol1(n, row);
    sol2(n);
}