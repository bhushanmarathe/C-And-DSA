#include <bits/stdc++.h>

using namespace std;

int Binary_to_Decimal(int n)
{
    int answer = 0;
    int i = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            answer = (pow(2, i)) + answer;
        }
        n = n / 10;
        i += 1;
    }
    return answer;
}

int main()
{
    int n;
    cin >> n;

    cout << Binary_to_Decimal(n) << endl;
}