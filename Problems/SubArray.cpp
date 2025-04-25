#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int lSubArray(vector<int> arr, int n, int sum) {
  int longestL = 0;
  for (int i = 0; i < n; i++) {
    int actualSum = 0;
    for (int j = i; j < n; j++) {
      actualSum += arr[j];

      if (actualSum == sum) {
        max(longestL, j - i + 1);
      }
    }
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> myArr;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    myArr.push_back(num);
  }

  return 0;
}
