// cpp
// A+B - 7
// https://www.acmicpc.net/problem/11021

#include <iostream>

int main()
{
    int T;
    int A, B;

    scanf("%d", &T);

    for(int i = 1; i <= T; ++i)
    {
        scanf("%d %d", &A, &B);

        printf("Case #%d: %d\n", i, A+ B);
    }

    return 0;
}