#include<bits/stdc++.h>

using namespace std;

void print(int number) {
    cout << number << endl;
}

void backtrackReverse(int i, int N) {
    if(i > N) return;
    backtrackReverse(i+1, N);
    print(i);
}

int main() {
    backtrackReverse(1, 10);
    return 0;
}