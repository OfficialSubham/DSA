#include <bits/stdc++.h>

using namespace std;

void reverseArray(int start, int size, int arr[])
{
    if (start >= size / 2)
        return;
    swap(arr[start], arr[size - start - 1]);
    reverseArray(start + 1, size, arr);
}

int main()
{
    int n;
    cin >> n;
    arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    reverseArray(0, n, arr);
    for (int j = 0; j < n; j++)
        cout << arr[j] << " ";
    return 0;
}