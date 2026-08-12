class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int low = 0; 
        int high = n-1;
        int res = -1;
        while(low <= high){
            int guess = (low + high) / 2;
            if(arr[guess] == target)
            return guess;
            if(arr[guess] > arr[n-1]) //part 2
            {
                if(arr[guess] < target)
                low = guess + 1;
                else{   //arr[guess] > target
                    if(arr[0] > target)
                    low = guess + 1; //right shoft
                    else 
                    high = guess - 1; //left shift
                }
            }

            else{   //part 1
            if(arr[guess] > target)
            high = guess - 1;

            else{  //arr[guess] < target
                if(arr[n-1] < target)
                high = guess - 1; //left shift
                else
                low = guess + 1; //right shift
            }

            }
        }
        return res;
    }
};