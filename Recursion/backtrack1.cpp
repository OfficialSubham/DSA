#include<bits/stdc++.h>

using namespace std;

void print(int number) {
    cout << number << endl;
}
int num = 0;
void backTrack(int i) {
    if(i < 1) return;
    backTrack(i - 1);
    print(i);
}

int main() {
    backTrack(10);
    return 0;
}