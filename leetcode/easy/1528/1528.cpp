/**
 * Runtime: 8 ms, faster than 94.80% 
 * Memory Usage: 15.4 MB, less than 63.23%
 */
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string result (indices.size(), 'a');
        int j=0;
        for(int i : indices) 
        {
            result[i] = s[j++];
        }
        
        return result;
    }
};
