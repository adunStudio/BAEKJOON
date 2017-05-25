/*
 * 괄호
 */

#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Stack
{
private:
    T data[32];
    int top = -1;

public:
    void reset() {
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    int size() {
        return top + 1;
    }

    void push(T d) {
        data[++top] = d;
    }

    T pop() {
        return data[top--];
    }

    T peek() {
        return data[top];
    }

};



int main()
{
    Stack<string> s;

    int length, mul = 1, sum = 0;
    string str, c, c2;

    cin >> str;

    length = str.length();

    for(int i = 0; i < length; ++i)
    {
        c = str[i];
        c2 = str[i+1];
        //[[][]]  3 * (3 + 3) = 3 * 3 + 3 * 3

        if(c == "(")
        {
            mul *= 2;
            s.push(c);
            if(c2 == ")")
                sum += mul;
        }
        else if(c == "[")
        {
            mul *= 3;
            s.push(c);
            if(c2 == "]")
                sum += mul;
        }
        else if(s.peek() == "(" and c == ")")
        {
            mul /= 2;
            s.pop();
        }
        else if(s.peek() == "[" and c == "]")
        {
            mul /= 3;
            s.pop();
        }
        else
        {
            cout << 0;
            return 1;
        }
    }

    if(s.isEmpty())
        cout << sum;
    else
        cout << 0;

    return 1;
}