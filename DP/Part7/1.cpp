#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    vector<vector<int>> dp(s.length() + 1, vector<int>(t.length() + 1, 0));

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < t.length(); j++)
        {
            dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i + 1][j]);
            dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j + 1]);
            if (s[i] == t[j])
            {
                dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + 1);
            }
        }
    }
    cout << dp[s.length()][t.length()] << endl;
    return 0;
}
