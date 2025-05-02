In this problem i have to find all possible permutation using backtrack

I have given an array [1, 2, 3]

I have to find all possible permutation of it

Try to visualize this

In a function

  Taking argument like
  -> solution it contains the number
  -> permutation array it contains the all numbers that have been done till now
  -> given number like [1, 2, 3] whose permutation I have to find
  -> take a map where the number will be store weather the number has already been taken if taken then its value will be 1 or 0

  Base Case
  If the size of the solution becomes equal to the size of the given number array
  then add it to the permutation array and return

  Main function
    for loop
    it will run for the each number each time
    every time it will check weather the number is already present in the solution array
    by checking weather the map[n] == 0 hence it is not in there
    then it will add that to the solution and run the function again
    once the base case reached it will return back
    then it will again make the number in the map as 0
    also the number will be pop back from the solution
    (I had tried to clear the solution array or vector but came to know that on clearing that it also clears the actual data)

This is how all the permutation got in the allPermutation array  or vector

TC -> O(N!) + O(N);
SC -> O(multiple N) i guess
