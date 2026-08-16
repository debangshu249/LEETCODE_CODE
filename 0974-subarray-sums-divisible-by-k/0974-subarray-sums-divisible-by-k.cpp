class Solution {
public:
    int subarraysDivByK(vector<int>& arr, int k) {
        int n = arr.size();
        int sum = 0;
        int res = 0;
        unordered_map<int,int> f;
        f[0] = 1; //empty subarray
        for(int i=0;i<n;i++){
            sum += arr[i];
            int remainder = sum % k;
            if(remainder < 0) // for negative remainder of (-9) = -9+5 = 4
            remainder = remainder + k; 
            int question = remainder; // red part //It needs to know the exact remainder.
            int frequency = f[question]; // //((sum % k) != 0) hashmap modhe ache kina thakle koto bar seta check  (red part condition)
            res += frequency;
            f[remainder] ++;
        }
        return res;
    }
};