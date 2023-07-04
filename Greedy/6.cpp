#include <bits/stdc++.h>
using namespace std;

double calculateDistance(int x1, int y1, int x2, int y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main(void)
{
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    vector<bool> seen(n);
    double ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
        seen[i] = false;
    }

    int next;

    int cx = x[0], cy = y[0];
    for (int i = 0; i < n - 1; i++)
    {
        double minDist = 10000000;
        for (int j = 1; j < n; j++)
        {
            if (seen[j])
            {
                continue;
            }
            double dist = calculateDistance(cx, cy, x[j], y[j]);
            if (dist < minDist)
            {
                minDist = dist;
                next = j;
            }
        }
        ans += minDist;
        cx = x[next];
        cy = y[next];
        seen[next] = true;
    }

    ans += calculateDistance(x[next], y[next], x[0], y[0]);
    cout << fixed << setprecision(10) << ans << endl;

    return 0;
}