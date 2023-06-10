#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<bool>> dp(n, vector<bool>(m, false));
    vector<int> a(n - 1, 0);
    int ans = 0;

    dp[0][0] = true;
    for (int i = 0; i < n - 1; i++)
    {
        int a;
        cin >> a;
        for (int j = 0; j < m; j++)
        {
            if (dp[i][j])
            {
                dp[i + 1][j] = true;
                if (j + a < m)
                {
                    dp[i + 1][j + a] = true;
                }
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (dp[n - 1][i])
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}