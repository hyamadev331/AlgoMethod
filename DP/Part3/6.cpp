#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> x(n, 0);
    vector<vector<bool>> dp(n + 1, vector<bool>(a, false));

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    dp[0][0] = true;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (!dp[i][j])
                continue;
            dp[i + 1][j] = dp[i][j];
            dp[i + 1][(j + x[i]) % a] = dp[i][j];
        }
    }
    if (dp[n][b])
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}