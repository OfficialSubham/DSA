#include<bits/stdc++.h>

using namespace std;

void sumOfN(int i, int sum) {
    if(i < 1) {
        cout << sum;
        return;
    }
    sumOfN(i-1, sum + i);
}

int main() {
    sumOfN(3, 0);
    return 0;
}