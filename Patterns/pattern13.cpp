#include <bits/stdc++.h>

using namespace std;

void pattern13(int height)
{
    int num = 1;
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }
}

int main()
{
    pattern13(4);
    return 0;
}