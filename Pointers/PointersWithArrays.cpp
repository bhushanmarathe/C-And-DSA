#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[10] = {2, 5, 4};
/*
    cout << "Address of 1st memory block is : " << arr << endl;
    cout << "Address of 1st memory block is : " << &arr[0] << endl;
    cout << "Value at 1st memory block before : " << *arr << endl;

    //*arr = *arr + 1;
    cout << "Value at 1st memory block after : " << *arr + 1 << endl;

    //*arr = *(arr + 1);
    cout << "Value  : " << *(arr + 1) << endl; 

    cout << "Value : " << *(arr) + 1 << endl;

    int temp[10];

    cout << sizeof( temp) << endl;

    int *ptr = &temp[0];

    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;
 

   int a[10] = {1,2,3,4};

   cout << &a[0] << endl;
   cout << &a << endl;
   cout << a << endl;

    cout << endl;
   int *ptr = &a[0];

   cout << ptr << endl;
   cout << &ptr << endl;
   cout << *ptr << endl;
   */

  char ch[6] = "abcde";

  cout << ch << endl;

  char *ptr = &ch[0];

  cout << ptr << endl;

  char temp = 'z';
  char *p = &temp;

  cout << &p << endl;
    return 0;
}