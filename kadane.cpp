#include <bits/stdc++.h>

using namespace std;

/*
   Kadane's algorithm runs in O(n)
   
   We keep the running sum as long as:
      running sum + a[i] >= 0
      maxSum = max(runningSum, maxSum)
   else
      runningSum = 0
*/

int main() {
   int n = 9, A[] = { 4, -5, 4, -3, 4, 4, -4, 4, -5 };
   int runningSum = 0, maxSum = 0;
   
   for (int i = 0; i < n; i++) {
      if (runningSum + A[i] >= 0) {
         runningSum += A[i];
         maxSum = max(maxSum, runningSum);
      }
      else {
        // the overall running sum is -ve, we greedily restart here
        // because starting from 0 is better for future
        // iterations than starting from a negative running sum
        runningSum = 0;
      }
   }
   
   printf("Max 1D Range Sum = %d\n", maxSum);

   return 0;
}
