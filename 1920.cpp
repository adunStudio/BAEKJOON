#include <iostream>
#include <algorithm>
using namespace std;

bool isIn(int arr[], int left, int right, int searched)
{

    int mid = (left + right) / 2;

    if(arr[mid] == searched)
        return true;

    if(left > right)
        return false;
    else
    {
        if(arr[mid] > searched)
            return isIn(arr, left, mid - 1, searched);
        else
            return isIn(arr, mid + 1, right, searched);
    }
}
int main()
{
    ios::sync_with_stdio(0);

    int i, j, n, m;
    int a[100003];
    int b[100003];

    cin >> n;

    for(i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    sort(a, a + n);


    cin >> m;

    for(i = 0; i < m; ++i)
    {
        cin >> b[i];
    }

    for(i = 0; i < m; ++i)
    {
        if(isIn(a, 0, n - 1, b[i]))
            cout << 1 << "\n";
        else
            cout << 0 << "\n";

    }
    return 1;
}