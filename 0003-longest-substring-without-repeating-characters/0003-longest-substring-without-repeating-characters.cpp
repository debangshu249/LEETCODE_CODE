class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int low = 0;
        int high;
        int res = INT_MIN;
        unordered_map<char,int> f;
        for(int high = 0;high < n;high++){
            f[s[high]]++;
            int len = high - low + 1;  //frist increase high then calculate len 
            while(f.size() < len){ // false condition
            f[s[low]]--;
            if(f[s[low]] == 0)
            f.erase(s[low]);
            low++;
            len = high - low + 1;
            }
            if(f.size() == len){
                len = high - low + 1;
                res = max(res,len);
            }
        }
        if(res == INT_MIN)
        return 0;
        else 
        return res;
    }
};