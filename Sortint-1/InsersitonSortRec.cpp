#include <bits/stdc++.h>

using namespace std;

void insersionRec(vector<int> &arr, int i, int n)
{
    if (i >= n)
        return;
    int j = i;
    while (j > 0 && arr[j] < arr[j - 1])
    {
        swap(arr[j], arr[j - 1]);
        j--;
    }
    insersionRec(arr, i + 1, n);
}

int main()
{
    int n;
    cin >> n;
    vector<int> myArr;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        myArr.push_back(num);
    }
    insersionRec(myArr, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << myArr[i] << " ";
    }
    return 0;
}