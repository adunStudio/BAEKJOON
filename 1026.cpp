/*
 * 보물
 */

#include <iostream>
using namespace std;

void swap(int arr[] ,int idx1, int idx2)
{
    int temp = arr[idx1];
    arr[idx1] = arr[idx2];
    arr[idx2] = temp;
}

void QSort(int arr[], int left, int right, int sort)
{
    if(left >= right)
        return;

    int mid = (left + right) / 2;

    swap(arr, left, mid);

    int first = left;

    for(int i = left; i <= right; ++i)
    {
        if(sort)
        {
            if(arr[i] > arr[left])
            {
                swap(arr, i, ++first);
            }
        }
        else
        {
            if(arr[i] < arr[left])
            {
                swap(arr, i, ++first);
            }
        }

    }

    swap(arr, first, left);

    QSort(arr, left, first -1, sort);
    QSort(arr, first +1, right, sort);
}

int main()
{
    ios::sync_with_stdio(0);

    int i, n, sum = 0;
    int* a;
    int* b;

    cin >> n;

    a = new int[n];
    b = new int[n];

    for(i = 0; i < n; ++i)
        cin >> a[i];

    for(i = 0; i < n; ++i)
        cin >> b[i];

    QSort(a, 0, n -1, 1);
    QSort(b, 0, n -1, 0);


    for(i = 0; i < n; ++i)
    {
        sum += a[i] * b[i];
    }

    cout << sum;
    
    delete[] a;
    delete[] b;

    return 1;
}