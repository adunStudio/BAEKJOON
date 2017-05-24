/*
 * 베르트랑 공준
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
    int nums[1000] = {0};
    int n = 1, t = 0, count = 0;

    while(1)
    {
        cin >> n;

        if(n == 0)
            break;

        nums[t++] = n;
    }

    for(int i = 0; nums[i] != 0; ++i)
    {
        count = 0;

        for(int m = nums[i] + 1; m <= 2 * nums[i]; ++m)
        {
            if(isPrime(m))
                count++;
        }

        cout << count << "\n";
    }



    return 1;
}