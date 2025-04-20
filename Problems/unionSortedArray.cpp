#include <bits/stdc++.h>

using namespace std;

vector<int> unionArray(vector<int> arr1, vector<int> arr2)
{
    set<int> numSet;
    vector<int> unionVector;
    for (int i = 0; i < arr1.size(); i++)
    {
        numSet.insert(arr1[i]);
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        numSet.insert(arr2[i]);
    }
    int index = 0;
    for (auto num : numSet)
    {
        unionVector.push_back(num);
    }
    return unionVector;
}

// TC -> O(n1 + n2)
// Space Wcase O(n1 + n2)
vector<int> optimalUnionArray(vector<int> arr1, vector<int> arr2)
{
    int i = 0;
    int j = 0;
    int previousElement;
    vector<int> unionVector;
    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] <= arr2[j])
        {
            if (arr1[i] != previousElement)
            {
                previousElement = arr1[i];
                unionVector.push_back(arr1[i]);
            }
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            if (arr2[j] != previousElement)
            {
                previousElement = arr2[j];
                unionVector.push_back(arr2[j]);
            }
            j++;
        }
    }
    while (i < arr1.size())
    {
        if (arr1[i] != previousElement)
        {
            previousElement = arr1[i];
            unionVector.push_back(arr1[i]);
        }
        i++;
    }
    while (j < arr2.size())
    {
        if (arr2[j] != previousElement)
        {
            previousElement = arr2[j];
            unionVector.push_back(arr2[j]);
        }
        j++;
    }
    return unionVector;
}

int main()
{
    int n1;
    cin >> n1;
    vector<int> arr1;
    for (int i = 0; i < n1; i++)
    {
        int num;
        cin >> num;
        arr1.push_back(num);
    }
    int n2;
    cin >> n2;
    vector<int> arr2;
    for (int i = 0; i < n2; i++)
    {
        int num;
        cin >> num;
        arr2.push_back(num);
    }

    vector<int> unionVec = optimalUnionArray(arr1, arr2);

    for (auto it : unionVec)
    {
        cout << it << " ";
    }

    return 0;
}