/*
 * 덱
 */

#include <iostream>
#include <string>

using namespace std;


class Node
{
public:
    int data;
    Node* next = nullptr;
    Node* prev = nullptr;

    Node(int n) {
        data = n;
    }
};


class Deque
{
private:
    Node* head = nullptr;
    Node* tail = nullptr;
    int count = 0;

public:
    bool isEmpty() {
        return count == 0;
    }

    int size() {
        return count;
    }

    void push_front(int n) {
        Node* newNode = new Node(n);

        newNode->next = head;

        if(isEmpty())
            tail = newNode;
        else
            head->prev = newNode;

        head = newNode;

        count++;
    }

    void push_back(int n) {
        Node* newNode = new Node(n);

        newNode->prev = tail;

        if(isEmpty())
            head = newNode;
        else
            tail->next = newNode;

        tail = newNode;

        count++;
    }

    int front() {
        if(isEmpty())
            return -1;

        return head->data;
    }

    int back() {
        if(isEmpty())
            return -1;

        return tail->data;
    }

    int pop_front() {
        if(isEmpty())
            return -1;

        Node* delNode = head;
        int data = delNode->data;

        head = delNode->next;

        if(head == nullptr)
            tail = nullptr;
        else
            head->prev = nullptr;

        delete delNode;
        count--;

        return data;
    }

    int pop_back() {
        if(isEmpty())
            return -1;

        Node* delNode = head;
        int data = delNode->data;

        tail = tail->prev;

        if(tail == nullptr)
            head = nullptr;
        else
            tail->next = nullptr;

        delete delNode;
        count--;

        return data;
    }
};

int main()
{
    Deque d = Deque();

    int t, data;
    string str;


    cin >> t;

    while(t--)
    {
        cin >> str;

        if(str == "push_front")
        {
            cin >> data;
            d.push_front(data);
        }
        else if(str == "push_back")
        {
            cin >> data;
            d.push_back(data);
        }
        else if(str == "front")
        {
            cout << d.front() << "\n";
        }
        else if(str == "back")
        {
            cout << d.back() << "\n";
        }
        else if(str == "pop_front")
        {
            cout << d.pop_front() << "\n";
        }
        else if(str == "pop_back")
        {
            cout << d.pop_back() << "\n";
        }
        else if(str == "size")
        {
            cout << d.size() << "\n";
        }
        else if(str == "empty")
        {
            if(d.isEmpty())
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
    }

    return 1;
}