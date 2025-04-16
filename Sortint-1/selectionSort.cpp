#include <bits/stdc++.h>

using namespace std;

void sortArrayWithRecursion(int arr[], int index, int size)
{
    // return statement
    if (index == size - 1)
        return;
    // logic
    int smallNum = arr[index];
    int numIndex = 0;
    for (int i = index; i < size; i++)
    {
        if (arr[i] < smallNum)
        {
            smallNum = arr[i];
            numIndex = i;
        }
    }
    swap(arr[index], arr[numIndex]);
    sortArrayWithRecursion(arr, index += 1, size);
}

void sortArrayWithTwoLoop(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int smallNum=arr[i];
        int index = 0;
        for(int j=i; j < size; j++) {
            if(arr[j] < smallNum) {
                smallNum = arr[j];
                index = j;
            }
        }
        swap(arr[i], arr[index]);
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
    sortArrayWithTwoLoop(myArray, arrSize);
    for (int i = 0; i < arrSize; i++)
    {
        cout << myArray[i] << " ";
    }
    return 0;
}