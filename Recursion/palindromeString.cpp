#include <bits/stdc++.h>

using namespace std;

bool checkStringPalindrome(int start, int size, string str)
{
    if (start >= size / 2)
        return true;
    if (str[start] != str[size - start - 1])
        return false;
    return checkStringPalindrome(start + 1, size, str);
}
 
int main()
{
    string s;
    cin >> s;
    int sizeOfString = s.size();
    bool isPalindrome = checkStringPalindrome(0, sizeOfString, s);
    cout << isPalindrome;
    return 0;
}