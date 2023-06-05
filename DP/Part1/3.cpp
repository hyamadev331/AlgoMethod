#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> t(n + 1); // その段への上り方が何通りあるか

    t[0] = 1;
    t[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        t[i] = t[i - 1] + t[i - 2];
    }
    cout << t[n] << endl;
    return 0;
}