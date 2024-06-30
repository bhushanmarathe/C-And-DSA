#include<bits/stdc++.h>

using namespace std;

bool isPossibleSolution(vector<int>& arr,int mid, int m)
{
    long long wood = 0;

    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] >= mid)
        {
            wood += (arr[i] - mid);

        }

    }
    
    if(wood >= m)
    {
        return true;
    }
    else return false;
}

int WoodHeight(vector<int>& arr,int m)
{
    long long start = 0;
    int maxi = 0;

    long long ans = -1;

    for(int i = 0; i < arr.size(); i++)
    {
        maxi = max(maxi, arr[i]);
    }

    long long end = maxi;

    long long mid = start + (end - start) / 2;

    while(start <= end)
    {
        if(isPossibleSolution(arr,mid,m))
        {
            ans = mid;
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
    //vector<int> arr = {20, 15, 10, 17};
    vector<int> arr1 = {4, 42, 40, 26, 46};
    int n, m;

    cin >> m;

    cout << "Height : " << WoodHeight(arr1,m) << endl;
}