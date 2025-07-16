#include <climits>
#include <iostream>
#include <string>
using namespace std;

bool containsAllCharacters(string &s, string &p)
{
    int count[256] = {0};

    // Count the frequency of each character
    // in the pattern
    for (char ch : p)
        count[ch]++;

    // For each character in the substring,
    // decrement its count
    for (char ch : s)
    {
        if (count[ch] > 0)
            count[ch]--;
    }

    // If all counts in the count array are zero,
    // the substring contains all characters of the pattern
    for (int i = 0; i < 256; i++)
    {
        if (count[i] > 0)
            return false;
    }

    return true;
}

string findSmallestSubstring(string &s, string &p)
{
    int m = s.length();
    int n = p.length();
    string smallestSubstring = "";

    int minLen = INT_MAX;

    // Generate all substrings of the given string
    for (int i = 0; i < m; i++)
    {
        for (int j = i; j < m; j++)
        {
            string substr = s.substr(i, j - i + 1);

            // Check if the substring contains all
            // characters of the pattern
            if (containsAllCharacters(substr, p))
            {
                int currLen = substr.length();

                // Update the smallestSubstring if the
                // current substring is smaller
                if (currLen < minLen)
                {
                    minLen = currLen;
                    smallestSubstring = substr;
                }
            }
        }
    }

    return smallestSubstring;
}

int main()
{
    string s = "timetopractice";
    string p = "toc";

    string result = findSmallestSubstring(s, p);

    if (!result.empty())
    {
        cout << result << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}
