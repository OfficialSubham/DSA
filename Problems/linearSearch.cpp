#include <bits/stdc++.h>

using namespace std;

int firstOccurance(vector<int> nums, int number)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == number)
        {
            return i;
        }
    }
    return -1;
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
    int findNumber;
    cin >> findNumber;
    cout << firstOccurance(myArr, findNumber) << endl;
    return 0;
}