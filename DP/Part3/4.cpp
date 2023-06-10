#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, ans = -1;
    cin >> n >> m;
    vector<int> w(n, 0), v(n, 0);
    vector<vector<int>> dp(n + 1, vector(m + 1, -1));

    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    dp[0][0] = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (dp[i][j] < 0)
                continue;

            dp[i + 1][j] = max(dp[i][j], dp[i + 1][j]);
            if (j + w[i] <= m)
            {
                dp[i + 1][j + w[i]] = max(dp[i + 1][j + w[i]], dp[i][j] + v[i]);
            }
        }
    }
    for (int i = 0; i <= m; i++)
    {
        ans = max(ans, dp[n][i]);
    }
    cout << ans << endl;
    return 0;
}