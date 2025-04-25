My approach :
This is intersection where i get two sorted arrays and in return i give the
common digits in those array.

Starting with two pointers i and j in 0
I used a while loop until one of the array get ended;

Then i check for a number in both

First Case -> They are same. If so then i will add one of them and move the pointer up

Second Case -> Then number in i is greater. Then I move the pointer of j
as i will get bigger number after increasing the pointers.
After moving for a while if i get a common number then i add it.

Third Case -> The number in j is greater. Then I fully do the opposite of the second case.

Worst TC -> O(n1 + n2) if all the elements are unique. Then it had to iterate all over the array.
SC -> as i am returning a new array it will take O(n1 or n2)
