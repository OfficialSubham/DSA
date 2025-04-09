#include <bits/stdc++.h>

using namespace std;

void numLeftTriangle(int height)
{

    for (int i = 0; i < height; i++)
    {
        int num = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }
}

int main()
{
    int testCase;
    cin>> testCase;
    for(int i=0; i<=testCase; i++) {
        int height;
        cin>>height;
        numLeftTriangle(height);
    }
    // numLeftTriangle(5);
    return 0;
}