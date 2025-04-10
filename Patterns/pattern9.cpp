#include <bits/stdc++.h>

using namespace std;

void pattern7(int height)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height - 1 - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern8(int height)
{
    for (int i = 0; i < height; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * (height - i) - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern9(int height)
{
    pattern7(height);
    pattern8(height);
}

int main()
{
    pattern9(5);
    return 0;
}