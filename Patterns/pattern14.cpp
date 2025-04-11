#include <bits/stdc++.h>

using namespace std;

void pattern14(int height)
{
    for (int i = 1; i <= height; i++)
    {
        char character = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << character;
            character++;
        }
        cout << endl;
    }
}

int main()
{
    pattern14(4);
    return 0;
}