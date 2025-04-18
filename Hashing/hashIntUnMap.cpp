#include <bits/stdc++.h>

using namespace std;
int main()
{
    unordered_map<int, int> mpp;

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // run hashing

    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    // iterate over unordered_map

    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }

    int checkTimes;

    cin >> checkTimes;

    while (checkTimes--)
    {
        int number;
        cin >> number;
        cout << mpp[number] << endl;
    }

    return 0;
}