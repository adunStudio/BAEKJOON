/*
 * 최소공배수
 */
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    int t, a, b, temp, n;

    cin >> t;

    while(t--)
    {
        cin >> a >> b;

        temp = a > b ? a : b;

        for(int i = 1; ; ++i)
        {
            n = temp * i;


            if(n % a == 0 and n % b == 0)
            {
                cout << n << "\n";
                break;
            }
        }
    }

    return 1;
}