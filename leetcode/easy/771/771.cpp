/*
 * Runtime: 0 ms, faster than 100.00%
 * Memory Usage: 6.4 MB, less than 64.77%
 **/
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int cnt = 0;
        for(int i=0; S[i]; ++i) 
        {
            for(int j=0; j<J.size(); ++j) 
            {
                if(S[i] == J[j]) ++cnt;
            }
        }
        
        return cnt;
    }
};
