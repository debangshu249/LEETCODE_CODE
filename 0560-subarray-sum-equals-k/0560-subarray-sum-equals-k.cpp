class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        int sum = 0;
        int res = 0;
        unordered_map<int,int> f;
        f[0] = 1;  //For 'empty' subarray
        for(int i = 0;i<n;i++){
            sum += arr[i];
            int question = sum - k;
            int freequency = f[question] ; //(sum-k)hashmap modhe ache kina seta check 
            res += freequency;
            f[sum]++; // hashmap modhe new sum insert holo jate pore 'freequency' dia check kora jai 
        }
        return res;
    }
};