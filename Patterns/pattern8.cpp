#include <bits/stdc++.h>

using namespace std;

void pattern8(int height)
{
    for (int i = 0; i < height; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2*(height - i) - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    pattern8(5);
    return 0;
}