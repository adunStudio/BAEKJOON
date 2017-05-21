#include <iostream>
using namespace std;

int main() {
    int count, result;
    int five = 0;
    int three = 0;

    cin >> count;

    five = count / 5;
    count %= 5;

    while(five >= 0)
    {
        if(count % 3 == 0)
        {
            three = count / 3;
            count %= 3;
            break;
        }

        five --;
        count += 5;
    }

    result = count == 0 ? five + three : -1;

    cout << result << endl;

    return 0;
}

