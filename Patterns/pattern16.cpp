#include <bits/stdc++.h>

using namespace std;

void pattern16(int height)
{
    char character = 'A';
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << character;
        }
        character++;
        cout << endl;
    }
}

int main()
{
    pattern16(5);
    return 0;
}