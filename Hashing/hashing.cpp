#include <bits/stdc++.h>

using namespace std;
int myHash[10000000];
int main()
{
    int n, checkTimes, num, findNum;

    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // run hashing


    for (int i = 0; i < n; i++)
    {
        myHash[arr[i]] += 1;
    }

    cin >> checkTimes;

    while(checkTimes--) {
        int number;
        cin >> number;
        cout << myHash[number] << endl;
    }

    return 0;
}