#include <bits/stdc++.h>

using namespace std;

void pattern17(int height)
{
    for (int i = 1; i <= height; i++)
    {
        char character = 'A';
        for (int j = 1; j <= height - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << character;
            character++;
        }
        character--;
        for (int j = i; j > 1; j--)
        {
            character--;
            cout << character;
        }
        cout << endl;
    }
}

int main()
{
    pattern17(5);
    return 0;
}