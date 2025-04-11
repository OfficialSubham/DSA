#include <bits/stdc++.h>

using namespace std;

void pattern21(int height)
{
    for (int i = 0; i < height; i++)
    {
        if (i == height - 1 || i == 0)
        {
            for (int j = 0; j < height; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 0; j < height; j++)
            {
                if (j == 0 || j == height - 1)
                {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}

int main()
{
    pattern21(5);
    return 0;
}