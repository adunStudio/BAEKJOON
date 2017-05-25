/*
 * 괄호
 */

#include <iostream>
#include <string>
using namespace std;

typedef string DATA;

struct Stack
{
    DATA data[51];
    int top = -1;
};

int sIsEmpty(Stack& s)
{
    return s.top == -1;
}

void sPush(Stack& s, DATA data)
{
    s.data[++s.top] = data;
}

int sSize(Stack& s)
{
    return s.top + 1;
}

DATA sPop(Stack& s)
{
    if(!sIsEmpty(s))
        return s.data[s.top--];
    else
        return "a";
}

DATA sTop(Stack& s)
{
    if(!sIsEmpty(s))
        return s.data[s.top];
    else
        return "a";
}

int main()
{
    Stack s;

    int t, length;
    string str, c;
    bool check = true;

    cin >> t;

    for(int i = 0; i < t; ++i)
    {
        cin >> str;

        length = str.length();

        s.top = -1;

        check = true;

        for(int l = 0; l < length; ++l)
        {
            c = str[l];

            if(c == "(")
                sPush(s, "(");

            else if(sPop(s) != "(")
                check = false;
        }


        if(check && sIsEmpty(s))
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }

    return 1;
}