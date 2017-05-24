/*
 * 소수
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
    int m, n , min = 0, sum = 0;

    cin >> m >> n;

    for(int i = m; i <= n; ++i)
    {
        if(isPrime(i))
        {
            sum += i;

            if(min == 0)
                min = i;
        }
    }

    if(min == 0)
        cout << -1;
    else
        cout << sum << "\n" << min;

    return 1;
}