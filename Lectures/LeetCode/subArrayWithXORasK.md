In this problem i have to find the number of subarrays
that form k as xor

Brute ->
  Just run two loops
  generate all possible sub arrays
  if you find the sub array which is equal to k
  then just add the frequency to a variable
  here use a third array to check from i to j;

TC -> O(n*n*n);
SC -> O(1);

Better ->
  Run two loops here just same as the three but it can also be done
  with two loops

TC -> O(N*N);
SC -> O(1);

Optimal ->
  use hash
  focus on the ending point
  it is like find x in the hash
  cause x = xr^k where k is the number you are looking for
  and xr is the XOR upto where you are currently at
  [
    Is there any sub array ending at which you are finding a number
    and having a XOR of k
  ]
  start with 0
  It is that type of method where you store frequency in hash
  and the count

  `
  In simple words it actually going in this type
  you are storing each xor in hash with their frequency
  then you are finding the xor with the number is already in the hash
  if it is there than add the frequency to the count
  `

  

TC -> O(N) + O(N log N);
SC -> O(N)
