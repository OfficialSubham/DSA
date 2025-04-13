#include <bits/stdc++.h> 
using namespace std;

long long int reverseNumber(long long int n)
{
	long long number = 0;
	long long x = n;
	while (x > 0) {
		long long num = x % 10;
		number = number * 10 + num;
		x = x / 10;
	}
	return number;
}

int main() {
    int a = reverseNumber(123456);
    cout << a;
    return  0;
}