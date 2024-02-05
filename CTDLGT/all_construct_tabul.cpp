#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        string tar, arr[100];
        cin >> tar;
        vector<vector<vector<string>>> dp(100); // dp[i] represents all the ways to construct a prefix of length i of the target string using words from the word bank
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            dp[i].clear();
            cin >> arr[i];
        }

        dp[0] = {{}}; // We can construct an empty prefix using an empty combination of words

        for (int i = 0; i <= tar.length(); i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (tar.substr(i, arr[j].length()) == arr[j])
                {
                    // If we can construct the current word from the word bank, we consider all the possible ways to construct the prefix of length i
                    // and add the current word to each of those ways to construct the prefix of length i + arr[j].length()
                    for (int k = 0; k < dp[i].size(); k++)
                    {
                        vector<string> tmp = dp[i][k];
                        tmp.push_back(arr[j]);
                        dp[i + arr[j].length()].push_back(tmp);
                    }
                }
            }
        }

        // We print out all the ways to construct the full target string
        for (auto x : dp[tar.length()])
        {
            for (auto y : x)
            {
                cout << y << " ";
            }
            cout << endl;
        }
    }
}

