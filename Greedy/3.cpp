#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int x, ans = 0;
    cin >> x;
    const vector<int> m = {50, 10, 5, 1};

    for (int i = 0; i < 4; i++)
    {
        int a;
        cin >> a;
        ans += min(x / m[i], a);
        x -= m[i] * min(x / m[i], a);
    }

    cout << ans << endl;

    return 0;
}