#include<bits/stdc++.h>

using namespace std;

//Using ForLoop

void InsertionSort(vector<int>& arr)
{
    for(int i = 1; i < arr.size(); i++)
    {
        int temp = arr[i];
        int j = i - 1;

        for(; j>=0; j--)
        {
            if(arr[j] > temp)
            {
                arr[j +1] = arr[j];
            }


            else
            {
                break;
            }
        }

        arr[j + 1] = temp;
    }

    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

//Using WhileLoop

void InsertionSortUsingWhileLoop(vector<int>& arr)
{
    int i = 1;

    while(i < arr.size())
    {
        int temp = arr[i];
        int  j = i - 1;

        while(j >= 0)
        {
            if(arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }

            else
            {
                break;
            }

            j--;
        }

        i++;
    }

    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    vector<int> arr = {0,-9,1,-8,2,-7,3,-6,4,-5};  

    InsertionSort(arr);
    InsertionSortUsingWhileLoop(arr);
    return 0;
}