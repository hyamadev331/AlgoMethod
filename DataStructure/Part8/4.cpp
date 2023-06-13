#include <bits/stdc++.h>
using namespace std;

void rec(vector<vector<int>> &child, int v)
{
    cout << v << " ";
    for (int i = 0; i < child[v].size(); i++)
    {
        rec(child, child[v][i]);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<vector<int>> child(n);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
        child[a[i]].push_back(i + 1);
    }
    rec(child, 0);
    return 0;
}