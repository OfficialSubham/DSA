#include <bits/stdc++.h>
using namespace std;

int maxFrequency(vector<int> &nums, int k)
{
    map<int, int> mpp;
    map<int, int> storeMap;
    for (auto it : nums)
    {
        mpp[it]++;
    }

    int numOfOperation = k;

    for (auto it : mpp)
    {

        int number = it.first;
        for (int i = 0; i < k; i++)
        {
            // cout << number << endl;
            if (storeMap[number])
            {
                // cout << "Number is:" << number << endl;
                storeMap[number]++;
                break;
            }
            if (numOfOperation <= 0 || numOfOperation - i <= 0)
            {
                break;
            }
            number = number + numOfOperation - i;
            if (mpp[number])
            {
                // cout << number << "->" << endl;
                storeMap[number]++;
                numOfOperation = i;
                break;
            };
            number = it.first;
        }
    }

    int freq = 0;
    // cout << storeMap.empty() << endl;
    for (auto it : mpp)
    {
        cout << storeMap[it.first] << endl;
        int value = it.first;
        if (storeMap[value] > freq)
        {
            freq = storeMap[it.first];
        }
    }
    return freq;
}

int main()
{
    int number;
    cin >> number;
    vector<int> arr;
    while (number--)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << maxFrequency(arr, 5);
    return 0;
}