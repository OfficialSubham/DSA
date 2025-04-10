#include <bits/stdc++.h>

using namespace std;

void pattern10(int height)
{
    for (int i = 1; i <= 2 * height - 1; i++)
    {
        int stars = i;
        if (i > height)
        {
            stars = 2 * height - i;
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    pattern10(5);
    return 0;
}