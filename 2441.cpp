/*
 * Q.
 * 첫째 줄에는 별 N개, 둘째 줄에는 별 N-1개, ..., N번째 줄에는 별 1개를 찍는 문제
 *
 * 하지만, 오른쪽을 기준으로 정렬한 별 (예제 참고)을 출력하시오.
 *
 * I.
 * 첫째 줄에 N (1<=N<=100)이 주어진다.
 *
 * O.
 * 첫째 줄부터 N번째 줄 까지 차례대로 별을 출력한다.
 */

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = n; i > 0; --i)
    {
        for(int k = 0; k < n - i; ++k)
            cout << " ";

        for(int j = i; j > 0; --j)
            cout << "*";

        cout << "\n";
    }
    return 1;
}