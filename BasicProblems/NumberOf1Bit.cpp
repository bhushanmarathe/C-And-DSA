#include <bits/stdc++.h>

using namespace std;

int main()
{
    int32_t n;

    cin >> n;

    int count = 0;

    if (n & 1) // checking last bit
    {
        count++;
    }

    n >> 1;

    return count;
}