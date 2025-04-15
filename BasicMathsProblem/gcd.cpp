#include <bits/stdc++.h>
using namespace std;

void findGCD(int a, int b)
{
   int divisibleNumber = 0;
   int minimum = min(a, b);
   for (int i = 1; i <= minimum; i++)
   {
      if (a % i == 0 && b % i == 0)
      {
         divisibleNumber = i;
      }
   }

   cout << divisibleNumber;
}

int gcd(int n1, int n2)
{
   int num = 0;
   if (n1 == 0)
   {
      return n2;
   }
   else if (n2 == 0)
   {
      return n1;
   }
   if (n1 == n2)
   {
      return n1;
   }
   else if (n1 > n2)
   {
      num = gcd(n1 % n2, n2);
   }
   else if (n2 > n1)
   {
      num = gcd(n2, n1);
   }
   return num;
}

int main()
{
   int yourGcd = gcd(20, 15);
   cout << yourGcd;
   return 0;
}