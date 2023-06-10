#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> w(n);

    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }

    int M = 0;
    for (int i = 0; i < n; i++)
    {
        M += w[i];
    }

    vector<vector<bool>> dp(n + 1, vector<bool>(50010, false));

    dp[0][0] = true;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 50010; j++)
        {
            if (!dp[i][j])
                continue;
            dp[i + 1][abs(j - w[i])] = dp[i][j];
            dp[i + 1][j + w[i]] = dp[i][j];
        }
    }
    for (int i = 0; i < 50010; i++)
    {
        if (dp[n][i])
        {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}