#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a{3, 1, 4, 1, 5, 9, 2, 6, 5, 3}, ans;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            int k;
            cin >> k;
            ans.push_back(a.at(k));
        }
        else
        {
            int k, v;
            cin >> k >> v;
            a.at(k) = v;
        }
    }

    for (const auto &e : ans)
    {
        cout << e << endl;
    }

    return 0;
}