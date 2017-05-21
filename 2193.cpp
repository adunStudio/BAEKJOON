#include <iostream>

using namespace std;

int main()
{
    int input_number;
    long binary[91][2];


    cin >> input_number;

    binary[1][1] = 1;
    binary[1][0] = 1;

    for(int i = 2; i <= input_number; ++i )
    {
        binary[i][1] = binary[i-1][0];
        binary[i][0] = binary[i-1][0] + binary[i - 1][1];
    }

    cout << binary[input_number][1];

    /**
     *
     *
     * 1        1                                          binary[1]  1  1: 1  0: 1
     * 2        10                                         binary[2]  1  1: 1  0: 2
     * 3        100    101                                 binary[3]  2  1: 2  0: 3
     * 4        1000   1001   1010                         binary[4]  3  1: 3  0: 5
     * 5        10000  10001  10010  10100  10101          binary[5]  5  1: 5  0: 8
     * 6        100000 100001 100010 100100 100101 ...     binary[6]  8  1: 8  0: 13
     */

    return 1;
}