#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, day = 0;
    ;
    cin >> n;
    while (n > 0)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n--;
        }
        day++;
    }
    cout << day << endl;
    return 0;
}