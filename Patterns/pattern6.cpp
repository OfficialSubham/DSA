#include <bits/stdc++.h>

using namespace std;

void pattern6(int height)
{

    for (int i = height; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        
        cout << endl;
    }
}

int main()
{
    pattern6(5);
    // numLeftTriangle(5);
    return 0;
}