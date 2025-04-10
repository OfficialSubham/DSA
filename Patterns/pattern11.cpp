#include <bits/stdc++.h>

using namespace std;

void pattern11(int height)
{
    int printRow = 1;
    for (int i = 1; i <= height; i++)
    {
        int print = printRow;
        for (int j = 1; j <= i; j++)
        {
            cout << print;
            if (print == 0)
            {
                print = 1;
            }
            else
            {
                print = 0;
            }
        }
        if (printRow == 0)
            {
                printRow = 1;
            }
            else
            {
                printRow = 0;
            }
        cout << endl;
    }
}

int main()
{
    pattern11(5);
    return 0;
}