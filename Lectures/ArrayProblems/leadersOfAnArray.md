In this problem i have to find the leaders of an array

Brute ->
  two loop each time check weather any element on the right is greater than the current element
  if yes then don't add it to the leader array
  else add it to the array

Optimal ->
  run one loop
  check the current element is greater than the number in current loop if so add it to the leader array

TC -> O(N);
SC -> O(N)
