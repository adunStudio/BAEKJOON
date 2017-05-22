/*
 * 단어 공부
 *
 * Q.
 * 알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오.
 *
 * 단, 대문자와 소문자를 구분하지 않는다.
 *
 * I.
 * 첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다. 주어지는 단어의 길이는 1,000,000을 넘지 않는다.
 *
 * O.
 * 첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다. 단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.
 */

#include <iostream>

using namespace std;

int main()
{
    int counts[26] = {0};
    int max = 0, maxIdx = 0, count = 0;
    char str[1000001];

    cin >> str;

    for(int i = 0; str[i]; ++i)
    {
        if(str[i] > 96)
            str[i] -= 32;

        counts[str[i] - 65]++;
    }

    for(int i = 0; i < 26; ++i)
    {
        if(counts[i] > max)
        {
            max = counts[i];
            maxIdx = i;
        }
    }

    for(int i = 0; i < 26; ++i)
    {
        if(counts[i] == max)
            count ++;
    }

    if(count > 1)
        cout << "?";
    else
        cout << (char)(maxIdx + 65);


    return 1;
}
