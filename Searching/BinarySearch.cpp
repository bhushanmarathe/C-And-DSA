#include<bits/stdc++.h>

using namespace std;

int firstOcc(vector<int> &arr, int size, int key)
{
    int start = 0, end = size - 1, mid = start + (end - start) / 2, ans = -1;

    while (start <= end)
    {
        /* code */

        if(key == arr[mid])
        {
            ans = mid;
            end = mid - 1;
        }

        else if(key > arr[mid])
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
        
    }

    return ans;
    
}

int EndOcc(vector<int> &arr, int size, int key)
{
    int start = 0, end = size - 1, mid = start + (end - start) / 2, ans = -1;

    while (start <= end)
    {
        /* code */

        if(key == arr[mid])
        {
            ans = mid;
            start = mid + 1;
        }

        else if(key > arr[mid])
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;

    }

    return ans;
    
}


int main()
{
    vector<int> arr = {1,2,3,3,5,1,2,3,3,5,1,2,3,3,5};

    cout << "First Occ : " << firstOcc(arr,15,3) << endl;
    cout << "Last Occ : " << EndOcc(arr,15,3) << endl;

    return 0;
}