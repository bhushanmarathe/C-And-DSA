#include<bits/stdc++.h>

using namespace std;

void SelectionSort(vector<int>& arr)
{
    for(int i = 0; i < arr.size() - 1; i++)
    {
        int minIndex = i;

        for(int j = i + 1; j < arr.size(); j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        swap(arr[minIndex], arr[i]);
    }

    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    vector<int> arr = {10,5,2,1,0,7,8,14,67,21,33};

    SelectionSort(arr);
}