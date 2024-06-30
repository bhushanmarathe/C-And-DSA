#include<bits/stdc++.h>

using namespace std;

int computeOnesAndZero(int arr[], int n)
{
    list<int>mylist;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
        {
            mylist.push_front(arr[i]);
        }
        else if(arr[i] == 1)
        {
            mylist.push_back(arr[i]);
        }

    }

    while(!mylist.empty())
    {
        cout << mylist.front() << " ";
        mylist.pop_front();
    }cout << endl;

}

int main()
{
    int arr[] = {0,1,0,0,0,1,0,1,0,0,1};

    computeOnesAndZero(arr,11);
}