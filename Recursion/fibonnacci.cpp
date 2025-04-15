#include <bits/stdc++.h>

using namespace std;
int num = 0;

void linearFibonacci(int i)
{
    int previousNum = 0;
    int currentNum = 1;
    for (int j = 0; j <= i; j++)
    {
        if (j == 0 || j == 1)
        {
            cout << j << " ";
            continue;
        }
        
        int next = currentNum + previousNum;
        cout << next << " ";
        previousNum = currentNum;
        currentNum = next;
    }
}

int main()
{
    linearFibonacci(5);
    return 0;
}