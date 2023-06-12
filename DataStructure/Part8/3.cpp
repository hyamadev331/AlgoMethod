#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    vector<int> p(n - 1);
    vector<vector<int>> child(n);

    for (int i = 0; i < n - 1; i++)
    {
        cin >> p[i];
        child[p[i]].push_back(i + 1);
    }

    for (int i = 0; i < n; i++)
    {
        if (child[i].size() == 0)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}