#include <bits/stdc++.h>
using namespace std;

const int INF = 100010;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> dp(n, vector<int>(n, INF)), a(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    dp[0][n - 1] = a[0][n - 1];

    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (i > 0)
            {
                dp[i][j] = min(dp[i][j], dp[i - 1][j] + a[i][j]);
            }
            if (j < n - 1)
            {
                dp[i][j] = min(dp[i][j], dp[i][j + 1] + a[i][j]);
            }
        }
    }

    cout << dp[n - 1][0] << endl;
    return 0;
}