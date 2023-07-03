#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, m;
    long long ans = 0;
    cin >> n >> m;
    vector<long long> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] <= b[j])
            {
                ans++;
                b[j] = -1;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}