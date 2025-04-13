#include <bits/stdc++.h> 
using namespace std;

bool checkArmstrong(long long int n)
{
    int initialNum = n;
	int number = 0;
    while (initialNum > 0) {
        int cubeNum = pow(initialNum %10, 3);
        number += cubeNum;
        initialNum /= 10;
    }

    if(number == n) {
        return true;
    }
    return false;
}

int main() {
    int a = checkArmstrong(371);
    cout << a;
    return  0;
}