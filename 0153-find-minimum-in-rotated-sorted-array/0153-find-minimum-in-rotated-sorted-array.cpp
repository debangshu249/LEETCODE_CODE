class Solution {
public:
    int findMin(vector<int>& arr) {
        int n = arr.size();
        int low = 0;
        int high = n-1; 
        int res = 0;
        while(low <= high){
            int guess = (low + high) / 2;
            if(arr[guess] > arr[n-1]) //part 2
            low = guess + 1;
            else {  //part 1
            res = guess;
            high = guess - 1;
            }
        }
        return arr[res]; // i have to return element of Array not index 
    }
};