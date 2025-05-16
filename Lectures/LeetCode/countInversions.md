This problem states that you were given an array of integers

Now you  have to find the number of pairs you can create
using that integers but the left element must be greater than the right
and also it's index must be next of it

Brute ->
  two loops
  the second loop start from the next of the first loop
  check weather the element i smaller than the current element
  if so than add it to the resultant
At last return the length cause it requires the count

If you don't have to return the pairs then just increase the count

TC -> O(N*N);
SC -> O(1)

Optimal ->
  Try remember what i understand with two sorted arrays
  use two pointer both in the starting in  both array
  check weather the left element (From left array) is greater
  if so, since the arrays are sorted then all the elements
  next to it can form pair with that number so just that number with the count
  
