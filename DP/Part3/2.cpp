#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> w(n, 0);
    vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false)); // i番目までのボールで重さをjにすることができるかどうか

    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }

    dp[0][0] = true;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (dp[i][j])
            {
                dp[i + 1][j] = true;
                if (j + w[i] <= m)
                {
                    dp[i + 1][j + w[i]] = true;
                }
            }
        }
    }

    if (dp[n][m])
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}