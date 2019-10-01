/*
// c
#include <stdio.h>

int main()
{
    int nums[2];

    while(scanf("%d %d", &nums[0], &nums[1]) == 2)
    {
        printf("%d\n", nums[0] + nums[1]);
    }

    return 0;
}
*/

// cpp
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
        printf("%d\n", nums[0] + nums[1]);
    }

    return 0;
}