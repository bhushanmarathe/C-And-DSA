#include<bits/stdc++.h>

using namespace std;

bool isPossibleSolution(vector<int>& arr, int n, int m, int mid)
{
    int studentCount = 1;
    int pageCount = 0;

    for(int i = 0; i < n; i++)
    {
        if(pageCount + arr[i] <= mid)
        {
            pageCount +=arr[i];
        }

        else
        {
            studentCount++;

            if(studentCount > m || arr[i] > mid)
            {
                return false;
            }

            pageCount = arr[i];
        }
    }

    return true;
}

int allocateBooks(vector<int>& arr, int n, int m)
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
    vector<int> arr = {5,7,100,11};

    int n, m;

    cin >> n >> m;

    cout << "Allocation : " << allocateBooks(arr,n,m) << endl; 
    return 0;
}