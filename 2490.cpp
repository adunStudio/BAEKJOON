#include <iostream>

using namespace std;

int main()
{
    int nums[4];
    int count = 0;

    while(++count <= 3)
    {
        scanf("%d %d %d %d", &nums[0], &nums[1], &nums[2], &nums[3]);
        cin.ignore();

        switch(nums[0]+nums[1]+nums[2]+nums[3])
        {
            case 0:
                cout << "D" << endl;
                break;
            case 1:
                cout << "C" << endl;
                break;
            case 2:
                cout << "B" << endl;
                break;
            case 3:
                cout << "A" << endl;
                break;
            case 4:
                cout << "E" << endl;
                break;
        }
    }

    return 1;
}