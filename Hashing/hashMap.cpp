#include <bits/stdc++.h>

using namespace std;
int main()
{
    map<int, int> mpp;

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // run hashing

    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
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