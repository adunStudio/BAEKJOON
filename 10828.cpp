/*
 * 스택
 */

#include <iostream>
using namespace std;

typedef int DATA;

struct Stack
{
    DATA data[10000];
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
        return -1;
}

DATA sTop(Stack& s)
{
    if(!sIsEmpty(s))
        return s.data[s.top];
    else
        return -1;
}

int main()
{
    Stack s;
    string command;
    DATA n;
    int t;

    cin >> t;

    while(t--)
    {
        cin >> command;

        if(command == "push")
        {
            cin >> n;
            sPush(s, n);
        }
        else if(command == "top")
            cout << sTop(s) << "\n";

        else if(command == "pop")
            cout << sPop(s) << "\n";

        else if(command == "size")
            cout << sSize(s) << "\n";

        else if(command == "empty")
            cout << sIsEmpty(s) << "\n";
    }
    return 1;
}