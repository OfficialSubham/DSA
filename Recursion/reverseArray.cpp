#include <bits/stdc++.h>

using namespace std;

void reverseArray(int l, int r, int arr[])
{
    if (l >= r)
        return;
    swap(arr[l], arr[r]);
    reverseArray(l + 1, r - 1, arr);
}

int main()
{
    int arr[5] = {2, 4, 5, 7, 1};
    reverseArray(0, 4, arr);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}