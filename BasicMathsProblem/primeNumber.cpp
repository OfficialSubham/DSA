#include <bits/stdc++.h> 
using namespace std;

bool checkPrimeNumber(int n)
{
    if(n <=1) return false;
    int divisibleTime = 0;
    float root = sqrt(n);
    cout << root;
    for(int i=1; i <=root; i++) {
        if(n %i == 0) {
            if(divisibleTime == 2) {
                return false;
            }
            divisibleTime++;
        }
    }
    return true;
}

int main() {
    bool a = checkPrimeNumber(6);
    cout << a;
    return  0;
}