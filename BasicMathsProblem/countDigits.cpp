#include <bits/stdc++.h> 
using namespace std;

int countDigit(long long x) {
    int number = 0;
    while(x > 0) {
        number++;
        x = x / 10;
    }
    return number;
}

int main() {
    int a = countDigit(123456);
    cout << a;
    return  0;
}