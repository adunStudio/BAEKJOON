/*
 * 파보나치 수
 */

#include <iostream>
using namespace std;

int main()
{
    long long n, sum = 1, prev = 1;
    cin >> n;

    if(n == 0)
    {
        cout << 0;
        return 1;
    }

    if(n == 1 or n == 2)
    {
        cout << 1;
        return 1;
    }

    for(int i = 3; i <= n; ++i)
    {
        sum += prev;
        prev = sum - prev;
    }

    cout << sum;
    return 1;
}