#include <bits/stdc++.h>

using namespace std;

void bubbleSortRec(int arr[], int start, int size)
{
    if (start >= size)
    {
        if (size <= 0)
            return;
        int arrSize = size - 1;
        bubbleSortRec(arr, 0, arrSize);
    }
    else if (arr[start] > arr[start + 1])
    {
        swap(arr[start], arr[start + 1]);
        bubbleSortRec(arr, start + 1, size);
    }
    else
    {

        bubbleSortRec(arr, start + 1, size);
    }
}

int main()
{
    int n;
    cin >> n;
    int myArr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> myArr[i];
    }
    bubbleSortRec(myArr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << myArr[i] << " ";
    }

    return 0;
}