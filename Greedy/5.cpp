#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int ans = 0;
    while (n > 0)
    {
        ans++;
        if (n % 3 == 0)
        {
            n /= 3;
        }
        else
        {
            n--;
        }
    }
    cout << ans << endl;
    return 0;
}