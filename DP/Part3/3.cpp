#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n - 1, 0), b(n - 1, 0);
    vector<vector<int>> dp(n, vector<int>(m, -1));

    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        cin >> b[i];
    }

    dp[0][0] = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (dp[i][j] < 0)
                continue;
            dp[i + 1][j] = max(dp[i][j], dp[i + 1][j]);
            if (j + a[i] < m)
            {
                dp[i + 1][j + a[i]] = max(dp[i][j] + b[i], dp[i + 1][j + a[i]]);
            }
        }
    }
    cout << dp[n - 1][m - 1] << endl;
    return 0;
}