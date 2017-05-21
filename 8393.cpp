/*
 * Q.
 * n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.
 *
 * I.
 * 첫째 줄에 n (1 ≤ n ≤ 10,000)이 주어진다.
 *
 * O.
 * 1부터 n까지 합을 출력한다.
 */

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << n * (n+1) / 2;

    return 1;
}