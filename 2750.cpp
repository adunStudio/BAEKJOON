/*
 * 수 정렬하기
 *
 * 버블정렬
 */

#include <iostream>
using namespace std;

void sswap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int n;
    int nums[1001] = {0};

    cin >> n;

    for(int i = 0; i < n; ++i)
        cin >> nums[i];

    for(int i = n; i > 1; --i)
        for(int j = 0; j < i-1; ++j)
            if(nums[j] > nums[j+1])
                sswap(nums[j], nums[j+1]);



    for(int i = 0; i < n; ++i)
        cout << nums[i] << "\n";

    return 1;
}