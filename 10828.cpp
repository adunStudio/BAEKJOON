// cpp
// 스택
// https://www.acmicpc.net/problem/10828

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> s;

    string command;

    int N, X;
    cin >> N;

    while(N--)
    {
        cin >> command;

        if(command == "push")
        {
            cin >> X;

            s.push(X);
        }
        else if(command == "pop")
        {
            if(s.empty())
            {
                cout << -1 << endl;
            }
            else
            {
                cout << s.top() << endl;
                s.pop();
            }
        }
        else if(command == "size")
        {
            cout << s.size() << endl;
        }
        else if(command == "empty")
        {
            cout << (s.empty() ? 1 : 0) << endl;
        }
        else if(command == "top")
        {
            if(s.empty())
            {
                cout << -1 << endl;
            }
            else
            {
                cout << s.top() << endl;
            }
        }
    }

    return 0;
}