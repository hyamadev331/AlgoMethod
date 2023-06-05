#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), t(n);
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }
    t[0] = 0;

    for (int i = 1; i < n; i++)
    {
        int tmp = 100010;
        for (int j = 1; j <= min(i, m); j++)
        {
            tmp = min(t[i - j] + j * a[i], tmp);
        }
        t[i] = tmp;
    }

    cout << t[n - 1] << endl;
    return 0;
}