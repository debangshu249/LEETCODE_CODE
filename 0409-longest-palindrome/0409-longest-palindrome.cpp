class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> f;
        for(int i=0;i<s.size();i++){
            f[s[i]]++;
        }
            int res = 0;
            bool odd = false;
            for(auto i : f){
                int val = i.second;
                if(val % 2 == 0) // Even
                res += val;
                else if(val % 2 == 1){
                res += val - 1;
                odd = true;
                }
            }
        if(odd == false) //IN case Of Even
        return res;
        else 
        return res + 1;
    }
};