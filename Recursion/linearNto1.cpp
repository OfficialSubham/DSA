#include<bits/stdc++.h>

using namespace std;

void print(int number) {
    cout << number << endl;
}
int num = 0;
void printFromN(int num) {
    if(num == 0) return;
    print(num);
    num--;
    printFromN(num);
}

int main() {
    printFromN(10);
    return 0;
}