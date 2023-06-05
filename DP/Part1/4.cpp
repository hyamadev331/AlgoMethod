#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> t(n + 1); // そのマスまで埋める方法が何通りあるか
    t[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        if (i - 1 >= 0)
            t[i] += t[i - 1];
        if (i - 2 >= 0)
            t[i] += t[i - 2];
        if (i - 3 >= 0)
            t[i] += t[i - 3];
    }
    cout << t[n] << endl;
    return 0;
}