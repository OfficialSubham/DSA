#include <bits/stdc++.h>

using namespace std;

void pattern20(int height)
{
    int space = 0;
    for (int i = 1; i < 2 * height; i ++ ) {
        int stars = i;
        if(i > height) {
            stars = 2 * height - i;
            if(space == 0) {
                space = 2;
            }
            else {
                space += 2;
            }
        }
        //stars
        for(int j = 0; j < stars ; j++) {
            cout << "*";
        }

        //spaces
        for(int j=0; j<=2*(height + space - i) - 1; j++) {
            cout << " ";
        }

        //stars
        for(int j = 0; j < stars ; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    pattern20(5);
    return 0;
}