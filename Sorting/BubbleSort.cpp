#include<bits/stdc++.h>

using namespace std;

void BubbleSort(vector<int>& arr)
{
    for(int i = 0; i < arr.size() - 1; i++)
    {
        bool swapped = false;
        for(int j = i + 1; j < arr.size(); j++)
        {
            if(arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                swapped = true;

            }
        }

        if(swapped = false)
            break;  ///already sorted 
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
    vector<int> arr1 = {10,9,8,7,6,5,4,3,2,1,0};
    vector<int> arr2 = {0,1,2,3,4,5,6,7,8,9,10};

    BubbleSort(arr1);
}