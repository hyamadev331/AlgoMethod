#include <bits/stdc++.h>
using namespace std;

int main()
{
    int answer = 1;

    for (int i = 1; i <= 10; i++)
    {
        answer *= i;
    }

    cout << answer << endl;
    return 0;
}