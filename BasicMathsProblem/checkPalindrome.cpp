#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string &n)
{
    string reverseString = "";
    for(int i=n.length() - 1; i >= 0; i--) {
        reverseString += n[i];
    }
    if(reverseString == n) {
        return true;
    }
    return false;
}

int main()
{
    string s = "abccba";
    int a = checkPalindrome(s);
    cout << a;
    return 0;
}