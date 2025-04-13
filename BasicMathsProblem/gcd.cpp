#include <bits/stdc++.h>
using namespace std;

void findGCD(int a, int b)
{
 int divisibleNumber = 0;
 int minimum = min(a, b);
 for(int i = 1; i <=minimum; i++) {
    if(a % i == 0 && b % i == 0) {
       divisibleNumber = i;
    }
 }

 cout << divisibleNumber;
}

int main()
{
    findGCD(9, 12);
    return 0;
}