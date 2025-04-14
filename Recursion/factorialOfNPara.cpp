#include <bits/stdc++.h>

using namespace std;
int num = 0;

void print(string name)
{
    cout << name << endl;
}
void paraFactorial(int i, int factorial)
{
    if (i == 1)
    {
        cout << factorial;
        return;
    }
    paraFactorial(i - 1, i * factorial);
}

int main()
{
    paraFactorial(4, 1);
    return 0;
}