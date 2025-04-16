#include <bits/stdc++.h>

using namespace std;

void insertionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (i == 0)
                break;
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
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