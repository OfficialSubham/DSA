#include <bits/stdc++.h>

using namespace std;

void pattern22(int height)
{
    for (int i = 0; i < 2 * height - 1; i++)
    {
        for (int j = 0; j < 2 * height - 1; j++)
        {
            int top = i;
            int left = j;
            int right = 2 * height - 2 - j;
            int bottom = 2 * height - 2 - i;
            int value = min(min(top, left), min(bottom, right));
            cout << height - value;
        }
        cout << endl;
    }
}

int main()
{
    pattern22(3);
    return 0;
}