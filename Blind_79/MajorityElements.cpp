#include <bits/stdc++.h>
using namespace std;

/*vector<int> majorityElement(vector<int> v)
{
    vector<int> ls;
    int n = v.size();

    for (int i = 0; i < n; i++)
    {
        if (ls.size() == 0 || ls[0] != v[i])
        {
            int cnt = 0;

            for (int j = 0; j < n; j++)
            {
                if (v[j] == v[i])
                    cnt++;
            }
            if (cnt > (n / 3))
            {
                ls.push_back(v[i]);
            }
        }

        if (ls.size() == 2)
            break;
    }
    return ls;
}*/

/*vector<int> majorityElement(vector<int> v)
{
    vector<int> ls;
    int n = v.size();
    map<int, int> mp;

    int mini = (n / 3);

    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;

        if (mp[v[i]] == mini)
        {
            ls.push_back(v[i]);
        }
        if (ls.size() == 2)
            break;
    }

    sort(ls.begin(), ls.end());
    return ls;
}*/

vector<int> majorityElement(vector<int> v)
{
    int cnt1 = 0, cnt2 = 0;
    int elm1 = INT_MIN;
    int elm2 = INT_MIN;

    for (int i = 0; i < v.size(); i++)
    {
        if (cnt1 == 0 && elm1 != v[i])
        {
            cnt1++;
            elm1 = v[i];
        }
        else if (cnt2 == 0 && elm2 != v[i])
        {
            cnt1++;
            elm2 = v[i];
        }
        else if (elm1 == v[i])
            cnt1++;
        else if (elm2 == v[i])
            cnt2++;
        else
            cnt1--, cnt2--;
    }

    vector<int> ls;

    cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (elm1 == v[i])
            cnt1++;
        if (elm2 == v[i])
            cnt2++;
    }

    int mini = (v.size() / 3) + 1;

    if (cnt1 >= mini)
        ls.push_back(elm1);
    if (cnt2 >= mini)
        ls.push_back(elm2);

    return ls;
}

int main()
{
    vector<int> arr = {11, 33, 33, 11, 33, 11};
    vector<int> ans = majorityElement(arr);
    cout << "The majority elements are: ";
    for (auto it : ans)
        cout << it << " ";
    cout << "\n";
    return 0;
}
