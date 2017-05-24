/*
 * 소수 구하기
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
    int m, n;

    cin >> m >> n;

    for(int i = m; i <= n; ++i)
    {
        if(isPrime(i))
            cout << i << "\n";
    }

    return 1;
}