/*
 * 골드바흐의 추측
 */

#include <iostream>
using namespace std;

bool isPrime(int& n)
{
    if(n <= 1)
        return false;

    if(n != 2 && n % 2 == 0)
        return false;

    for(int i = 3; i * i <= n; ++i)
    {
        if(n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int primes[10000] = {0};
    int idx = 0, mid;
    int n, t, i, j, check = 1;

    for(int i = 1; i < 10001; i++)
        if(isPrime(i))
            primes[i] = 1;

    cin >> t;

    for(int k = 0; k < t; ++k)
    {
        cin >> n;

        mid = n >> 1;

        check = 1;

        for(i = j = mid; check; --i, ++j)
        {
            if(primes[i] && primes[j])
            {
                cout << i << " " << j << "\n";
                check = 0;
            }
        }

    }
}