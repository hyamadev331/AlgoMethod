#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> d(n);
    vector<bool> t(n + 1, false); // そのマスに到達可能かどうか
    for (int i = 0; i < m; i++)
    {
        cin >> d[i];
    }
    t[0] = true;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i >= d[j])
            {
                t[i] = t[i] || t[i - d[j]];
            }
        }
    }

    if (t[n])
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}