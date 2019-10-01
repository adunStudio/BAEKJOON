// cpp
// A+B - 6
// https://www.acmicpc.net/problem/10953

#include <iostream>

int main()
{
    int T;
    int A, B;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d,%d", &A, &B);

        printf("%d\n", A+ B);
    }

    return 0;
}