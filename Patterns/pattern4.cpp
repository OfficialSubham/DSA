#include <bits/stdc++.h>

using namespace std;

void pattern4(int height)
{

    int num = 1;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int number = num;
            cout << number;
            cout << " ";
        }
        num += 1;
        cout << endl;
    }
}

int main()
{
    pattern4(5);
    // numLeftTriangle(5);
    return 0;
}