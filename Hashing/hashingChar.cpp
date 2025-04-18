#include <bits/stdc++.h>

using namespace std;
int main()
{
    int myHash[26] = {0};
    int x = 'a';
    
    string s;
    cin >> s;
    
    // run hashing
    
    
    for (int i = 0; i < s.size(); i++)
    {
        myHash[s[i] - x] += 1;
    }
    
    int checkTimes;
    
    cin >> checkTimes;

    while(checkTimes--) {
        char character;
        cin >> character;
        cout << myHash[character - x] << endl;
    }

    return 0;
}