#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int lengthOfLongestSubstring(const string &s)
{
    unordered_set<char> charSet;
    int left = 0;
    int maxLength = 0;

    for (int right = 0; right < s.length(); ++right)
    {
        // If the character is already in the set, remove characters from the left until it's not
        while (charSet.find(s[right]) != charSet.end())
        {
            charSet.erase(s[left]);
            left++;
        }
        // Add the current character to the set
        charSet.insert(s[right]);
        // Update the maximum length
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

int main()
{
    string s = "abcabcbb";
    cout << "Length of the longest substring without repeating characters: " << lengthOfLongestSubstring(s) << endl;
    return 0;
}
