#include <bits/stdc++.h>

using namespace std;
int num = 0;

int sumOfNFun(int i)
{
    if (i == 1)
    {
        return 1;
    }
    return i + sumOfNFun(i - 1);
}

int main()
{
    int number = sumOfNFun(3);
    cout << number;
    return 0;
}