/*
 * Runtime: 0 ms, faster than 100.00%
 * Memory Usage: 6.2 MB, less than 64.71%
 */
class Solution {
  public:
    int subtractProductAndSum(int n) {
      int p = 1;
      int s = 0;

      while(n>0) 
      {
        int t = n%10;
        n = n/10;

        p *= t;
        s += t;
      }

      return p - s;
    }
};
