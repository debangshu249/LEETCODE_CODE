class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n = arr.size();
        int min_ending = 0;
        int max_ending = 0;
        int ans = 0;
        for(int i = 0;i<n;i++){
            if(i == 0){
                min_ending = arr[0];
                max_ending = arr[0];
                ans = max_ending;
            }
            else{
                int v1 = max_ending * arr[i];
                int v2 = min_ending * arr[i];
                int v3 = arr[i];
                min_ending = min(v1,min(v2,v3)); // for negative element 
                max_ending = max(v1,max(v2,v3));
                ans = max(ans,max_ending);
            }

        } 
        return ans;
    }
};