// cpp
// A+B - 8
// https://www.acmicpc.net/problem/11022

#include <iostream>

int main()
{
    int T;
    int A, B;

    scanf("%d", &T);

    for(int i = 1; i <= T; ++i)
    {
        scanf("%d %d", &A, &B);

        printf("Case #%d: %d + %d = %d\n", i, A, B, A+ B);
    }

    return 0;
}