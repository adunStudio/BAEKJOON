/*
 * 유기농 배
 */

#include <iostream>
using namespace std;

int main()
{
    int t;
    int field[51][51];
    int row, col, k;
    int x, y;
    int count = 0;

    while(t--)
    {
        cin >> row >> col >> k;

        for(int i = 0; i < row; ++i)
            for(int j = 0; j < col; ++j)
                field[i][j] = 0;

        while(k--)
        {
            cin >> y >> x;
            field[y][x] = 1;
        }

        for(int i = 0; i < row; ++i)
        {
            for(int j = 0; j < col; ++j)
            {

            }
        }

    }
    return 1;
}
