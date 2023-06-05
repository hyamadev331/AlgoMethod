#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n), t(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    t[0] = 0;
    t[1] = a[1];
    for (int i = 2; i < n; i++)
    {
        t[i] = min(t[i - 1] + a[i], t[i - 2] + 2 * a[i]);
    }

    cout << t[n - 1] << endl;

    return 0;
}