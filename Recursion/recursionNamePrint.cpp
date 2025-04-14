#include<bits/stdc++.h>

using namespace std;
int num = 0;

void print(string name) {
    cout << name << endl;
}
void printName() {
    if(num == 5) return;
    print("Subham");
    num++;
    printName();
}

int main() {
    printName();
    return 0;
}