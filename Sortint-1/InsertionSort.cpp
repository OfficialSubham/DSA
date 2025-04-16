#include <bits/stdc++.h>

using namespace std;

void insertionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
}

int main()
{
    int arrSize;
    cin >> arrSize;
    int myArray[arrSize];
    for (int i = 0; i < arrSize; i++)
    {
        cin >> myArray[i];
    }
    insertionSort(myArray, arrSize);
    for (int i = 0; i < arrSize; i++)
    {
        cout << myArray[i] << " ";
    }
    return 0;
}