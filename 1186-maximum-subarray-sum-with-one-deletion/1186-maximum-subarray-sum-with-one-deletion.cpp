class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n = arr.size();
        int ans = arr[0];
        int one_delete = 0;
        int no_delete = arr[0];
        for(int i = 1;i<n;i++){
            int pre_one_delete = one_delete;
            int pre_no_delete = no_delete;
            no_delete = max(no_delete + arr[i],arr[i]); //normal kaden
            int v2;
            if(pre_one_delete == 0)
            v2 = arr[i];
            else 
            v2 = pre_one_delete + arr[i]; // agai one delete hoye gache tai sudhu add
            one_delete = max(v2,pre_no_delete);
            ans = max(ans,max(no_delete ,one_delete)) ;
        }
        return ans ;
    }
};