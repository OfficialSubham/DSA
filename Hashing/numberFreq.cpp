#include <bits/stdc++.h>
using namespace std;

int mostFrequentElement(vector<int> &nums)
{
    map<int, int> mpp;
    for (auto it : nums)
    {
        mpp[it] += 1;
    }
    int number = 0;
    int occurTime = 0;
    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
        if (it.second > occurTime)
        {
            number = it.first;
            occurTime = it.second;
        }
        else if (it.second == occurTime)
        {
            if (number > it.first)
            {
                number = it.first;
            }
        }
    }
    return number;
}

int main()
{
    int number;
    cin >> number;
    vector<int> arr;
    for (int i = 0; i < number; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    cout << mostFrequentElement(arr);
    return 0;
}