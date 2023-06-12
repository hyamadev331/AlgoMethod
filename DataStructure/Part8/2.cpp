#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n;
    vector<int> p(n);
    vector<vector<int>> child(n);
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        p[b] = a;
        child[a].push_back(b);
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int v;
        cin >> v;
        sort(child[p[v]].begin(), child[p[v]].end());
        for (int j = 0; j < child[p[v]].size(); j++)
        {
            cout << child[p[v]][j];
            if (j != child[p[v]].size() - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}