/**
 * Runtime: 0 ms, faster than 100.00%
 * Memory Usage: 6.5 MB, less than 22.49% 
 */
class Solution {
  public:
    int maxDepth(string s) {
      int max = 0;
      int cnt = 0;

      for(int i=0; i<s.size(); ++i)
      {
        if (s[i] == '(') 
        {
          ++cnt;
        }
        else if (s[i] == ')')
        {
          --cnt;
        }

        if (cnt > max) 
          max = cnt;
      }

      return max;
    }
};
