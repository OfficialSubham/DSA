#include<bits/stdc++.h>

using namespace std;

void leftStartPattern(int height) {
    for(int i=0; i <= height; i++) {
        for(int j=0; j<=i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    leftStartPattern(5);
    return 0;
}