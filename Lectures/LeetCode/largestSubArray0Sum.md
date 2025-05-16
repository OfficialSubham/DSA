In this problem i have to find the largest sub array with 0
sum

It can be done by kadane's algorithm


Optimal ->
  use hashing
  use one pointer approach
  first check weather the sum == 0
  if so mark the length in the length
  if not then add the sum with the indexes
  then every time check that the current sum is already
  present in the hash
  if so then give the max of the current length and that previous length

TC -> O(N);
SC -> O(N);
