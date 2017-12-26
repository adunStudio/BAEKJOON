/*
 * 프린터 큐
 */

#include <iostream>
using namespace std;

void swap(int* a, int* b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
int main()
{
    int t; // 테스트 케이스
    int n; // 문서의 수
    int m; // 어떤위치
    int q[100];
    int o[100];

    cin >> t;

    while(t--)
    {
        cin >> n >> m;
        for(int i = 0; i < n; ++i)
        {
            cin >> q[i];
            o[i] = i;
        }
    }

    return 1;
}