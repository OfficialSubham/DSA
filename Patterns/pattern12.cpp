#include <bits/stdc++.h>

using namespace std;

void pattern12(int height)
{
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        for (int j = 1; j <= 2 * (height - i); j++)
        {
            cout << " ";
        }

        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

int main()
{
    pattern12(4);
    return 0;
}