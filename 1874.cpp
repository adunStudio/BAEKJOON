/*
 * 스택 수열
 */

#include <iostream>
using namespace std;

typedef int DATA;

struct Stack
{
    DATA data[200003];
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
    Stack order;

    int t, n, idx = 0;
    int nums[100001];
    char what[200002];

    cin >> t;

    for(int i = 0; i < t; ++i)
    {
        cin >> nums[i];
    }

    for(int i = t - 1; i >= 0; --i)
    {
        sPush(order, nums[i]);
    }


    for(int i = 0; i < t; ++i)
    {
        sPush(s, i+1);

        what[idx++] = '+';

        while(!sIsEmpty(s) && !sIsEmpty(order) && sTop(s) == sTop(order))
        {
            sPop(s);
            sPop(order);
            what[idx++] = '-';
        }
    }

    if(!sIsEmpty(s) || !sIsEmpty(order))
    {
        cout << "NO";
    }
    else
    {
        for(int i = 0; i < idx; ++i)
            cout << what[i] << "\n";
    }

    return 1;
}