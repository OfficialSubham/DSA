#include <bits/stdc++.h>

using namespace std;

void pattern19(int height)
{
    int stars = height;
    int space = 0;
    for (int i = 0; i < 2 * height; i++)
    {
        // condition

        if (i >= height)
        {
            stars = 2 * i - height + 1;
            if(space == 0 ) {
                space = 2;
            }
            else {
                space = space + 4;
            }
        }

        // star
        for (int j = 1; j <= stars - i; j++)
        {
            cout << "*";
        }

        // space
        for (int j = 0; j < 2 * i - space; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 0; j < stars - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    pattern19(5);
    return 0;
}