#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n)
{
    if (n < 2)
    {
        return false;
    }
    for (long long i = 2; i * i <= n; i++)
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
    long long n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (isPrime(i) && isPrime(n - i))
        {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}