#include <bits/stdc++.h>

using namespace std;

void pattern7(int height)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 1; j <= height - 1 - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2*i + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    pattern7(5);
    return 0;
}