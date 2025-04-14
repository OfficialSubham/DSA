#include<bits/stdc++.h>

using namespace std;

void print(int number) {
    cout << number << endl;
}
int number = 1;
void fun(int num) {
    if(number > num) return;
    print(number);
    number++;
    fun(num);
}

int main() {
    fun(10);
    return 0;
}