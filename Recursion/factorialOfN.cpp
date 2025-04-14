#include<bits/stdc++.h>

using namespace std;

int printFactorial(int i) {
    if(i == 1) {
        return 1;
    }
    return i * printFactorial(i - 1);
}

int main() {
    int factorial = printFactorial(4);
    cout << factorial;
    return 0;
}