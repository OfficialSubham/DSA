#include <bits/stdc++.h>

using namespace std;

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool isSwap = false; 
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                isSwap = true;
                swap(arr[j], arr[j + 1]);
            }
        }
        if (!isSwap)
        {
            cout << "Loop Ended";
            break;
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
    bubbleSort(myArray, arrSize);
    for (int i = 0; i < arrSize; i++)
    {
        cout << myArray[i] << " ";
    }
    return 0;
}