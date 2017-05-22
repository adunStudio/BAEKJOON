/*
 * 단어의 개수
 *
 * Q.
 * 영어 대소문자와 띄어쓰기만으로 이루어진 문장이 주어진다.
 * 이 문장에는 몇 개의 단어가 있을까? 이를 구하는 프로그램을 작성하시오.
 * 단, 단어는 띄어쓰기 하나로 구분된다고 생각한다.
 *
 * I.
 * 첫 줄에 영어 대소문자와 띄어쓰기로 이루어진 문장이 주어진다. 이 문장의 길이는 1,000,000을 넘지 않는다.
 *
 * O.
 * 첫째 줄에 단어의 개수를 출력한다.
 *
 */

#include <iostream>

using namespace std;

int main()
{
    char str[1000010];

    int idx = 0, count = 0;
    int prev, current;

    cin.getline(str, 1000010);

    while(str[idx++])
    {
        current = (int)str[idx -1];

        if(prev == 32 && current != 32)
            count ++;

        prev = current;
    }

    if(str[0] != 32)
        count ++;

    cout << count;

    return 1;
}