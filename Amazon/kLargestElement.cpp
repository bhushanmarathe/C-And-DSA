// #include <bits/stdc++.h>

// using namespace std;

// bool isSymmetric(int num)
// {                              // function to check if the number is symmetric
//     string s = to_string(num); // variable to store the string
//     int n = s.length();        // variable to store the length of the string
//     if (n % 2 == 1)
//         return false; // if the length of the string is odd return false
//     int leftSum = 0;  // variable to store the left sum
//     int rightSum = 0; // variable to store the right sum
//     for (int i = 0; i < n / 2; i++)
//     { // loop until i is less than n/2
//         leftSum += s[i] - '0';
//         cout << "Left Sum: " << leftSum << endl; // update the left sum
//         rightSum += s[n - i - 1] - '0';
//         cout << "Right Sum: " << rightSum << endl; // update the right sum
//     }
//     return leftSum == rightSum; // return true if the left sum is equal to the right sum else return false
// }

// int countSymmetricIntegers(int low, int high)
// {
//     int res = 0; // variable to store the result
//     for (int i = low; i <= high; i++)
//     { // loop until i is less than or equal to high
//         if (isSymmetric(i))
//             res++; // if the number is symmetric increment the result
//     }
//     return res; // return the result
// }

// int main()
// {
//     // int n;

//     // cin >> n;

//     // string s = to_string(n);

//     // cout << s << endl;

//     int low, high;

//     cin >> low >> high;

//     cout << countSymmetricIntegers(low, high);
// }

#include <bits/stdc++.h>

using namespace std;

void kLargestElementUsingPriorityQueue(vector<int> arr, int k)
{
    priority_queue<int, vector<int>, greater<int>> maxHeap;

    for (int i = 0; i < arr.size(); i++)
    {
        maxHeap.push(arr[i]);

        if (maxHeap.size() > k)
        {
            maxHeap.pop();
        }
    }

    while (!maxHeap.empty())
    {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
}

/*int element(vector<int> &arr, int &k)
{
    int n = arr.size();
    vector<int> a;

    for (int i = 0; i < n; i += 2)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                a.push_back(arr[i]);
            }
        }
    }

    sort(arr.begin(), arr.end(), greater<int>());

    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }

    int low = INT_MAX;
    int high = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        low = min(low, arr[i]);
        high = max(high, arr[i]);
    }

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int count = 0;

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] > mid)
            {
                count++;
            }
        }

        if (count >= k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    // return low - 1;
    return high;
}*/

int main()
{
    vector<int> arr = {11, 3, 2, 1, 15, 5, 4, 45, 88, 96, 50, 45};
    int k = 3;

    // int ans = element(arr, k);

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (arr[i] > ans)
    //     {
    //         cout << arr[i] << " ";
    //     }
    // }

    kLargestElementUsingPriorityQueue(arr, k);
}