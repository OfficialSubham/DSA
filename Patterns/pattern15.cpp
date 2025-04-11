#include <bits/stdc++.h>

using namespace std;

void pattern15(int height)
{
    for (int i = 1; i <= height; i++)
    {
        char character = 'A';
        for (int j = 0; j <= height - i; j++)
        {
            cout << character;
            character++;
        }
        cout << endl;
    }
}

int main()
{
    pattern15(5);
    return 0;
}