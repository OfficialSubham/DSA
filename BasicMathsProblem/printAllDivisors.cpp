#include <bits/stdc++.h>
using namespace std;

void printAllDivisor(int n)
{
    vector<int> vec;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (n / i != i)
            {
                vec.push_back(n / i);
            }
        }
    }
    for(auto it = vec.end() - 1; it >= vec.begin() ; it--) {
        cout << *(it) << " ";
    }
}

int main()
{
    printAllDivisor(36);
    return 0;
}