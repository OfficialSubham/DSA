#include <bits/stdc++.h>

using namespace std;
int main()
{
    map<char, int>mpp;
    
    string s;
    cin >> s;
    
    // run hashing
    
    
    for (int i = 0; i < s.size(); i++)
    {
       mpp[s[i]]++;
    }
    
    int checkTimes;
    
    cin >> checkTimes;

    while(checkTimes--) {
        char character;
        cin >> character;
        cout << mpp[character] << endl;
    }

    return 0;
}