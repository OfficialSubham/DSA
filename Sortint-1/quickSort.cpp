#include <bits/stdc++.h>

using namespace std;

int qs(int arr[], int low, int high)
{
    int pivot = low;
    int i = low;
    int j = high;
    while (i < j) {
        while(arr[i] <= arr[pivot] && i <= high) {
            i++;
        }
        while(arr[j] > arr[pivot] && j >= low + 1 ) {
            j--;
        }
        if(i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[j], arr[pivot]);
    return j;
}

void quickSort(int arr[], int low, int high)
{
    if (low >= high)
        return;
    int partitionIndex = qs(arr, low, high);
    quickSort(arr, low, partitionIndex - 1);
    quickSort(arr, partitionIndex + 1, high);
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
    quickSort(myArr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << myArr[i] << " ";
    }

    return 0;
}