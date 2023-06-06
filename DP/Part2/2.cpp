#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        cin >> a[0][i];
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > 0)
            {
                a[i][j] += a[i - 1][j - 1];
            }
            if (j < n - 1)
            {
                a[i][j] += a[i - 1][j + 1];
            }
            a[i][j] += a[i - 1][j];
            a[i][j] %= 100;
        }
    }
    cout << a[n - 1][n - 1] << endl;
    return 0;
}