#include <bits/stdc++.h>

using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int temp[high + 1];
    int index = 0;
    int leftPointer = low;
    int rightPointer = mid + 1;
    while (leftPointer <= mid && rightPointer <= high)
    {
        if (arr[leftPointer] <= arr[rightPointer])
        {
            temp[index] = arr[leftPointer];
            leftPointer++;
        }
        else
        {
            temp[index] = arr[rightPointer];
            rightPointer++;
        }
        index += 1;
    }

    while (leftPointer <= mid)
    {
        temp[index] = arr[leftPointer];
        index += 1;
        leftPointer++;
    }
    while (rightPointer <= high)
    {
        temp[index] = arr[rightPointer];
        index += 1;
        rightPointer++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void mergeSort(int arr[], int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    // First Call
    mergeSort(arr, low, mid);
    // Second Call
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
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
    mergeSort(myArr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << myArr[i] << " ";
    }

    return 0;
}