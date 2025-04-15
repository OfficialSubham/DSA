#include <bits/stdc++.h>

using namespace std;
int num = 0;

int recursiveFibonacci(int i)
{
    if (i <= 1)
    {
        return i;
    }

    int last = recursiveFibonacci(i - 1);
    int secondLast = recursiveFibonacci(i - 2);
    int number = last + secondLast;
    cout << number << " ";

    return number;
}

int main()
{
    cout << recursiveFibonacci(4);
    return 0;
}