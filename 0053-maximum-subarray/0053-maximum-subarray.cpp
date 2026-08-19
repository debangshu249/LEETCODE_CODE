class Solution {
public:
    int maxSubArray(vector<int>& arr) { // kaddens 
        int n = arr.size();
        int bestending = 0;
        int ans = 0;
        int i=0;
        if(i == 0){
                bestending = arr[i];
                ans = bestending;
            }
        for(i=1;i<n;i++){
                int v1 = bestending + arr[i];
                int v2 = arr[i];
                bestending = max(v1,v2);
                ans = max(ans,bestending);
            
        }
        return ans;
    }
};