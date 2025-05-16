In this problem i have to find the missing and repeating number in an
array

Brute ->
  Run two loops
  every time check how many time they appears
  if they appears two times then it is you repeating number
  if it appears 0 time then it is your missing number

TC -> O(N * N);
SC -> O(1)

Better ->
  Use hash
  since all the numbers are from 1 to n then
  take an array of n + 1
  then start a loop from 1 in the hash array
  if their count is 2 then it is repeating number and if it is zero then it is the missing number

TC -> O(2N);
SC -> O(N);

----------- Two Optimal----------

Optimal ->
  use xor or use basic mathematics

  Using Basic mathematics
    Take couple of variable like given array sum
    actual sum given square sum actual square sum
    x and y where x i repeating number and y is missing number
    first find the actual sum and the given sum
    when subtracting the given sum with the actual sum
    you will get x - y ---- (i)
    then find the square sum of them
    then you will get x*x - y*y ---- (ii)
    solve those equation you will easily find your answer

TC -> O(N);
SC -> O(1)

*Not for this code this is leetcode*

 Code 
       vector<int> fullArray;
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[i].size(); j++) {
                fullArray.push_back(grid[i][j]);
            }
        }
        
        int n = fullArray.size();
        long double SN = ((long double)n * (n + 1))/2;
        long double S2N = ((long double)n * (n + 1) * (2*n + 1))/6;
        long double S = 0;
        long double S2 = 0;
        
        for(int i =0; i < n; i++) {
            S += fullArray[i];
            S2 += fullArray[i]*fullArray[i];
        }

        long double value1 = S - SN; //x-y
        long double value2 = S2 - S2N; // x*x - y*y
        value2 = value2/value1; //x+y = value2/x-y

        long double x = (value2 +  value1)/2;
        long double y = x - value1;
        return {(int)x, (int)y}; 
      

  The XOR method
    first find the xor of all number upto n
    also find the xor of the number in the given array
    then xor both of them
    after that find the differentiating bit of that xor
    differentiating bit ->
      The bit in which they are differentiating between them
      for example ->
        the final xor is 1 ^ 5
        i.e for 1 it is 001 and for five it is 101 (binary)
        if you carefully notice you will find out
        that they are differentiating in the 2nd position.
        That is your differentiating bit.
    as binary is only 0 and 1
    i.e the number will only differentiating with 0 and 1
    hence just spread the actual and the given array
    in 0 and 1 bit in their differentiating position
    you can easily observe that the number which became zero
    is actually appears even times
    whereas the missing and appearing twice number appears odd times
    Consider the whole array like take the given array and 1 to n
    in a single array
  Once you done all these then xor the numbers in 0 and 1 bit
  you will find out the missing and repeating number
  but you are not able to distinguish which one is what
  at last find with single itereation which one is appearing twice and
  missing

TC -> O(4N);
SC -> O(1);


Code ->
        vector<int> fullArray;
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[i].size(); j++) {
                fullArray.push_back(grid[i][j]);
            }
        }

        int n = fullArray.size();
        int xr = 0;
        
        for(int i = 0; i < n; i++) {
            xr ^= fullArray[i];
            xr ^= (i + 1);
        }

        int bitNo = 0;
        while(1) {
            if((xr & (1 << bitNo)) != 0) {
                break;
            }
            bitNo++;
        }
        int zero = 0;
        int one = 0;
        for(int i = 0; i < n; i++) {
            if((fullArray[i] & (1<<bitNo)) != 0) {
                one ^= fullArray[i];
            }
            else {
                zero ^= fullArray[i];
            }
        }
        for(int i = 1; i <= n; i++) {
            if((i & (1<<bitNo)) != 0) {
                one ^= i;
            }
            else {
                zero ^= i;
            }
        }

        int cnt = 0;
        for(int i =0; i < n; i++) {
            if(fullArray[i] == zero) cnt++;
        }
        if(cnt == 2) return {zero, one};
        return {one, zero};


