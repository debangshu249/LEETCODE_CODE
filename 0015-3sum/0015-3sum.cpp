class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {       
        vector<vector<int>> res;
        sort(arr.begin(), arr.end());
        int n = arr.size();
        for(int i=0;i<n-2;i++){
        if(i > 0 && arr[i] == arr[i-1])
        continue;
        int sum = - arr[i];
        int left = i+1;
        int right = n-1;
        while(left<right){
            int s = arr[left] + arr[right];
            if(s == sum){ //best case
                res.push_back({arr[i],arr[left],arr[right]}) ;
                left++;
                right--;

            while(left < n && arr[left] == arr[left-1]) //increnebt korar por er value ta same (duplicate val)
            left++;
            
            while(right >= 0 && arr[right] == arr[right+1])
            right--;

        }
            else if(s < sum) //s is smaller than sum
            left++;
            else 
            right--; //s is bigger than sum
        }
    }
    return res;
    }
};