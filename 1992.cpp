/*
 * 쿼드 트리
 */

#include <iostream>
#include <vector>

using namespace std;

vector< vector<int> > v;


void quadTree(int y_, int x_, int size) {
    int cur = v[y_][x_];
    bool flag = true;

    for(int y = y_; y < size && flag; ++y)
        for(int x = x_; x < size && flag; ++x)
            if(cur != v[y][x])
                flag = false;

}

int main()
{
    int size, number = 0;

    cin >> size;


    for(int y = 0; y < size; ++y)
    {
        v.push_back(vector<int>());
        for(int x = 0; x < size; ++x)
        {
            scanf("%1d", &number);
            v[y].push_back(number);
        }
    }

    quadTree(0, 0, size);

    return 1;
}