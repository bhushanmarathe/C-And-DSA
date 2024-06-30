#include<bits/stdc++.h>

using namespace std;

bool isPossibleSolution(vector<int>& arr, int n, int m, int mid)
{
    int painterCount = 1;
    int pageCount = 0;

    for(int i = 0; i < n; i++)
    {
        if(pageCount + arr[i] <= mid)
        {
            pageCount +=arr[i];
        }

        else
        {
            painterCount++;

            if(painterCount > m || arr[i] > mid)
            {
                return false;
            }

            pageCount = arr[i];
        }
    }

    return true;
}

int allocatePainter(vector<int>& arr, int n, int m)
{
    int s = 0;
    int sum = 0;
    int ans = -1;

    for(int i =0; i < n; i++)
    {
        sum += arr[i];
    }

    int e = sum;
    int mid = s + (e - s) / 2;

    while(s <= e)
    {
        if(isPossibleSolution(arr,n,m,mid))
        {
            ans = mid;
            e = mid - 1;
        }

        else
        {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}







int main()
{
    vector<int> arr = {10,20,30,40};
    vector<int> arr1 = {5,5,5,5};

    int n, m;

    cin >> n >> m;

    cout << "Partition : " << allocatePainter(arr,n,m) << endl; 
    cout << "Partition : " << allocatePainter(arr1,n,m) << endl;

    return 0;
}