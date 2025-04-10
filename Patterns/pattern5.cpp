#include <bits/stdc++.h>

using namespace std;

void pattern5(int height)
{

    for (int i = height; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    pattern5(5);
    // numLeftTriangle(5);
    return 0;
}