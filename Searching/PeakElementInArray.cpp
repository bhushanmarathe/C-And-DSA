#include<bits/stdc++.h>

using namespace std;

int PeakElement(vector<int> &arr)
{
    int start = 0, end = arr.size() - 1, mid = start + (end - start) / 2;

    while (start < end)
    {
        /* code */

        if(arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }

        else
        {
            end = mid;
        }

        mid = start + (end - start) / 2;
        
    }

    return start;
    
}





int main()
{
    vector<int> arr = {1,2,3,4,5,4,3,2,1};

    cout << "Peak Element : " << PeakElement(arr) << endl;

    return 0;
}