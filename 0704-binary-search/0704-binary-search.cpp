class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int low = 0;
        int high = n-1;
        while(low <= high){
            int guess =  (low+high) / 2;
            if (arr[guess] == target )
            return guess; // guess == index , thats why we return guess

            else if (arr[guess] < target)
            low = guess + 1;
            
            else 
            high = guess - 1;
        }
        return -1 ;
    }
};