#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int> &arr) // leetcode problem
{
    // Solution 1
    //  int i = 0;
    //  sort(arr.begin(), arr.end());
    //  vector<int> ans;
    //  while (i < arr.size())
    //  {
    //      int count = 1;
    //      for (int j = i + 1; j < arr.size(); j++)
    //      {
    //          if (arr[i] == arr[j])
    //              count++;
    //      }
    //      ans.push_back(count);
    //      i = i + count;
    //  }
    //  sort(ans.begin(), ans.end());
    //  for (int i = 0; i < ans.size() - 1; i++)
    //  {
    //      if (ans[i] == ans[i + 1])
    //          return false;
    //  }
    //  return true;

    // Solution 2
    //  unordered_map<int, int> freqMap;  // to count the occurrences of each value in the array
    //  unordered_map<int, int> countMap; // to count the occurrences of each occurrence value
    //  for (int num : arr)
    //  {
    //      freqMap[num]++;
    //  }

    // for (auto i : freqMap)
    // {
    //     cout << i.first << "->" << i.second << endl;
    // }

    // cout << endl;

    // for (auto &p : freqMap)
    // {
    //     countMap[p.second]++;
    // }

    // for (auto i : countMap)
    // {
    //     cout << i.first << "->" << i.second << endl;
    // }

    // return freqMap.size() == countMap.size();

    // Solution 3

    map<int, int> mp;
    vector<int> vec, vec1;
    for (int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]]++;
    }
    for (auto ip : mp)
    {
        vec.push_back(ip.second);
    }
    vec1 = vec;
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());

    if (vec.size() == vec1.size())
        return true;
    else
        return false;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    // cout << endl;
}

int main()
{
    vector<int> arr = {1, 2, 2, 1, 1, 3};
    vector<int> arr1 = {2, 4, 7, 2, 7};
    vector<int> arr2 = {1, 3, 1, 3, 6, 6, 7, 10, 7};

    bool ans = uniqueOccurrences(arr1);

    cout << ans;
    // printArray(arr, 10);
}