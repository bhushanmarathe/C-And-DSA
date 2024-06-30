#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 4;
    int b = 6;

    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (a ^ b) << endl;
    cout << ~a << ~b << endl;

    cout << endl;

    int c = 17;
    int d = 19;
    int e = 21;

    cout << (c >> 1) << endl;
    cout << (c >> 2) << endl;
    cout << (d << 1) << endl;
    cout << (e << 2) << endl;

    cout << (100 >> 1) << endl;
    cout << (12345678 >> 1) << endl;

    cout << endl;

    int i = 10;

    cout << (i++) << endl; //  10 8897
    cout << (++i) << endl; // 12
    cout << (i--) << endl; // 12
    cout << (--i) << endl; // 10
}