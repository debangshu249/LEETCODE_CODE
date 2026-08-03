class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        int expected_sum = n * (n+1)/2; 
        for(int i=0;i<n;i++){
            sum += arr[i]; 
        }
        int diff = expected_sum - sum;
        return diff;
    }
};