class Solution {
public:

    int first_find(vector<int>& arr ,int target ){
        int n = arr.size();
        int low = 0;
        int high = n-1;
        int res = -1 ;
        while(low <= high){
            int guess = (high + low) / 2;
            if(arr[guess] < target)
            low = guess + 1;
            else if(arr[guess] > target)
            high = guess - 1;
            else{ //EQUAL PART
            res = guess;
            high = guess - 1;
            }
        }
            return res;

    }

    int last_find(vector<int>& arr,int target){
        int n = arr.size();
        int low = 0;
        int high = n-1;
        int res = -1 ;
        while(low <= high){
            int guess = (high + low) / 2;
            if(arr[guess] < target)
            low = guess + 1;
            else if(arr[guess] > target)
            high = guess - 1;
            else{ //EQUAL PART
            res = guess;
            low = guess + 1;
            }
        }
            return res;
    }


    vector<int> searchRange(vector<int>& arr, int target) {
        int first = first_find(arr,target);
        int last = last_find(arr,target);

        return{first,last};
    }
};