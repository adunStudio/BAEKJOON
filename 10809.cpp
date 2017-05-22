/*
 * 알파벳 찾
 *
 * Q.
 * 알파벳 소문자로만 이루어진 단어 S가 주어진다.
 * 각각의 알파벳에 대해서, 단어에 포함되어 있는 경우에는 처음 등장하는 위치를, 포함되어 있지 않은 경우에는 -1을 출력하는 프로그램을 작성하시오.
 *
 * I.
 * 첫째 줄에 단어 S가 주어진다. 단어의 길이는 100을 넘지 않으며, 알파벳 소문자로만 이루어져 있다.
 *
 * O.
 * 각각의 알파벳에 대해서, a가 처음 등장하는 위치, b가 처음 등장하는 위치, ... z가 처음 등장하는 위치를 공백으로 구분해서 출력한다.
 *
 * 만약, 어떤 알파벳이 단어에 포함되어 있지 않다면 -1을 출력한다. 단어의 첫 번째 글자는 0번째 위치이고, 두 번째 글자는 1번째 위치이다.
 */

#include <iostream>

using namespace std;

int main()
{
    char str[101];
    int location[26] = {};
    int idx = 0;

    cin >> str;

    for(int i = 0; i < 26; ++i)
        location[i] = -1;

    while(str[idx++])
    {
        if(location[str[idx-1] - 97] == -1)
            location[str[idx-1] - 97] = idx - 1;
    }

    for(int l : location)
        cout << l << " ";

    return 1;
}