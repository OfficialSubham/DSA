#include<bits/stdc++.h>
using namespace std;
void printStarPattern(int row, int column) {
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    printStarPattern(5, 5);
    return 0;
}