I have given two sorted array and I have to return one array which contains the unique elements in both the array.

My approach ->
Used a set as it can insert only unique elements.
But this approach causes more SC
First loop adds the element from it to the set.
Then same for the second array

At last I all the set elements into the vector to return

Optimal approach ->
Taking two pointers i and j with 0 value
A while loop runs until one of them get exhausted
inside the loop I check which element in lesser
then check either the array (the array I will return) is empty
or the last element is not equal to the current element
then I adds it to the array.
Since they are sorted. When the element in j is greater then check weather I previously added it or not if not then add to the array.
According to the above condition i increases the pointer by one.

At last add add the elements from the array which is remaining and also check weather the last element is their or not.

Worst TC -> O(n1 + n2) as if all the elements are unique i needs to loop through the both arrays.
SC -> O(n1 + n2) if all the elements are unique and it needs to be taken for returning.
