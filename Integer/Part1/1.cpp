#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int start = 53;
    do
    {
        start++;
    } while (!isPrime(start));
    cout << start << endl;
    return 0;
}