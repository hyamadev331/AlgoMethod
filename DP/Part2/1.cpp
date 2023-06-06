#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> a(4, vector<int>(4, 0));

    for (int i = 0; i < 4; i++)
    {
        cin >> a[0][i];
    }

    for (int i = 1; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j > 0)
            {
                a[i][j] += a[i - 1][j - 1];
            }
            if (j < 3)
            {
                a[i][j] += a[i - 1][j + 1];
            }
            a[i][j] += a[i - 1][j];
        }
    }
    cout << a[3][3] << endl;
    return 0;
}