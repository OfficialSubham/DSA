Here i need to find a sum of k number with the longest length

Brute approach -> 
  Three for loops to find all possible sub arrays
  1st for loop  
    -> to iterate through the whole array with i
  2nd for loop
    -> to start with j = i upto n 
    -> it will carry a sum variable with 0
  3rd for loop
    -> start with i upto j
    -> it sums all the number in the subarray
  Atlast if the sum matches the k then find the max between the
  previous max length and current length

Atlast return the max length

TC -> nearly O(n*n*n);
SC -> O(1)

but brute force can be optimised up to n*n by removing the last array 
then you have two array
then take a sum variable of 0 inside the outer loop
then in the inside loop each time add it to the sum and check weather the sum matches the require k if so then pick the max length and set
it to the max length

Better approach -> 
  Use hashing.
  Explianing it in my words ->
    Start with a sum = 0
    Use only one loop
    during each loop make sum += the element
    each time first check weather the sum matches the given number
    if so then make the longest length of the subarray
    with the value of max between the previous and i + 1 as zero
    base indexing
    Now the difficult part read it carefully
    after doing the above thing now you have to check weather the
    sum you have currently - with the k is present in the hash
    if so you have to store the index with its sum previously in the map
    then substract it with the current index to get the length if you 
    find it longer then the previous length then assign it to that
    at last return the longest length this is how it can be solved in 
    better approach.

TC -> O(N logn)
SC -> O(N)

Optimal approach -> 
  Use two pointers
  just remember
  one pointer will go forward
  once the sum exceed then substract the sum
  with the value in the index of second pointer
  then increase the second pointer 

  the flow would be like 
    first ->
      check weather the sum is exceding the k
      if so the remove the value from the other pointer index until it
      is greater the k
      then check weather the number is equal to k
      if so then maxLen will be right - left + 1
      if not then increase the right pointer and check weather
      the right pointer exceeds the array size
      if not then add the value to the sum

TC -> O(2N)
SC -> o(1)
