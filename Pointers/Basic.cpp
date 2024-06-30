#include<bits/stdc++.h>

using namespace std;

int main()
{
    // int i = 6;
    // int *n = &i;

    // //cout << n << endl;

    // cout << "Size of Num : " << sizeof(i) << endl;
    // cout << "Size of Pointer : " << sizeof(n) << endl;

    int num = 5;
    int *a = &num;
    // *a = *a * 2;

    // cout << a << endl;

    //Copy Pointer
    // int *b = a;

    // cout << b << "-" << a << endl;
    // cout << *b << "-" << *a << endl;

    //Important Concept

    int i = 3;
    int *t = &i;

    cout << (*t) << endl;
    *t = *t + 1;
    cout << (*t) << endl;
    t = t + 1;
    cout << (t) << endl;



    return 0;
}