#include<bits/stdc++.h>

using namespace std;

void print(int number) {
    cout << number << endl;
}
int num = 0;
void fun() {
    if(num == 4) return;
    print(num);
    num++;
    fun();
}

int main() {
    fun();
    return 0;
}