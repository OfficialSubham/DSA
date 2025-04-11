#include <bits/stdc++.h>

using namespace std;

void pattern18(int height)
{
    for (int i = 0; i < height; i++)
    {
        char character = 'A' + height - 1;
        for (int j = i; j >= 0; j--)
        {
            char  newChar = character - j;
            cout << newChar;
        }
        cout << endl;
    }
}

int main()
{
    pattern18(5);
    return 0;
}