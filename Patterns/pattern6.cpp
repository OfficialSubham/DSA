#include <bits/stdc++.h>

using namespace std;

void pattern6(int height)
{

    for (int i = height; i > 0; i--)
    {
        int num = 1;
        for (int j = 0; j < i; j++)
        {
            cout << num;
            num++;
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