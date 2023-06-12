#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n;
    vector<int> p(n);
    vector<vector<int>> child(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> p[i];
        child[p[i]].push_back(i + 1);
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int v;
        cin >> v;
        for (int j = 0; j < child[p[v - 1]].size(); j++)
        {
            cout << child[p[v - 1]][j];
            if (j != child[p[v - 1]].size() - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}