In this problem I have to find the next permutation of a number

Brute ->
  Find all permutation and then find the next of it
  I have defined the finding permutation in a other .md file

Better ->
  Only in C++ use next permutation function

Optimal ->
  Find a break point from right hand side
  Break Point ->
    There should be a dip in the graph
    like the graph is increasing from the right to the left
    suddenly the number is lesser than its previous one

  Then find from its next element weather the number is just greater
  than the break point
  it can also be find from the last upto that breakpoint cause the element 
  just greater than the break point is the first element from the right

  Then swap the numbers with each other then just sort the rest of the array from the breakpoint

TC -> nearly O(N) + O(NlogN);
SC -> O(N);
