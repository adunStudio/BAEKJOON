/*
 * 소수 찾기
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
    int nums[101];
    int t, count = 0;

    cin >> t;

    for(int i = 0; i < t; ++i)
        cin >> nums[i];

    for(int i = 0; i < t; ++i)
        if(isPrime(nums[i]))
            ++count;

    cout << count;

    return 1;
}