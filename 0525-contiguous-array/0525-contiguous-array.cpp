class Solution {
public:
    int findMaxLength(vector<int>& arr) {
        int n = arr.size();
        int one = 0;
        int zero = 0;
        int res = 0;
        int i ;
        unordered_map<int,int> f;
        for(int i = 0;i<n;i++){
            if(arr[i] == 0)
            zero++;
            else{
                one++;
            }
            int diff = zero - one;
            if(diff == 0){ //same number of 1 and same number of 0 present here
            res = max(res,i+1);
            }
            if(f.find(diff) == f.end()){ // means 'diff' is not present in hashmap  
            f[diff] = i;
            }
            else { // means 'diff' is present in the hashmap
            int indx = i - f[diff];
            res = max(indx,res);
            }
        }
        return res;
    }
};