#include <bits/stdc++.h>

using namespace std;

vector<int> intersectionOptimal(vector<int> arr1, vector<int> arr2)
{
    int i = 0;
    int j = 0;
    int sizeI = arr1.size();
    int sizeJ = arr2.size();
    vector<int> intersectionVec;
    while (i < sizeI && j < sizeJ)
    {
        if (arr1[i] == arr2[j])
        {
            intersectionVec.push_back(arr1[i]);
            i++;
            j++;
        }
        else
        {
            if (arr1[i] < arr2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
    }
    return intersectionVec;
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

    vector<int> intersectionVector = intersectionOptimal(arr1, arr2);

    for(int it : intersectionVector) {
        cout << it << " ";
    }

    return 0;
}