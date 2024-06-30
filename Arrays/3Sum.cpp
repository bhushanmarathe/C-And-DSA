#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> findTriplets(vector<int> &arr, int n, int K)
{
    // vector<vector<int>> ans;
    // vector<int> temp;

    vector<vector<int>> ans;

    set<vector<int>> s;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                {
                    if (arr[i] + arr[j] + arr[k] == K)
                    {
                        vector<int> temp;
                        temp.push_back(arr[i]);
                        temp.push_back(arr[j]);
                        temp.push_back(arr[k]);
                        sort(temp.begin(), temp.end());

                        if (s.find(temp) == s.end())
                        {
                            ans.push_back(temp);
                            s.insert(temp);
                        }
                    }
                }
            }
        }
    }

    return ans;

    // sort(arr.begin(), arr.end());

    // vector<vector<int>> ans;

    // for (int i = 0; i + 2 < n; i++)
    // {
    //     int left = i + 1;  // left pointer
    //     int right = n - 1; // right pointer

    //     while (left < right)
    //     {
    //         int sum = arr[i] + arr[left] + arr[right];
    //         if (sum == K)
    //         {
    //             ans.push_back({arr[i], arr[left], arr[right]});
    //             int left_element = arr[left];
    //             int right_element = arr[right];
    //             while (left < right && arr[left] == left_element)
    //                 left++; // skip the duplicate elements
    //             while (left < right && arr[right] == right_element)
    //                 right--; // skip the duplicate elements
    //         }

    //         else if (sum < K)
    //             left++; // increment the left pointer

    //         else
    //             right--; // decrease the right pointer

    //         while (i + 1 < n && arr[i] == arr[i + 1])
    //             i++; // skip the duplicate elements
    //     }
    // }
    // return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 1, 2, 3};
    vector<int> arr1 = {1, 1, 2, 2, 1, 1};

    vector<vector<int>> answer = findTriplets(arr, arr.size(), 4);

    for (int i = 0; i < answer.size(); i++)
    {
        for (int j = 0; j < answer[i].size(); j++)
            cout << answer[i][j] << " ";
        cout << endl;
    }
}