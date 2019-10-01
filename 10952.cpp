// cpp
// A+B - 5
// https://www.acmicpc.net/problem/10952

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nums[2];

    while(cin >> nums[0] >> nums[1])
    {
        if(nums[0] + nums[1] == 0)
        {
            break;
        }

        printf("%d\n", nums[0] + nums[1]);
    }

    return 0;
}