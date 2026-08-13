class Solution {
public:

    int fun(vector<int> & piles,int n,int speed) { // I want to Calculate The value of 'h'
    int h = 0;
    for(int i = 0;i<n;i++){
        h = h + (piles[i] / speed);
        if(piles[i] % speed != 0)
        h++;
    }
    return h;
    }
    int minEatingSpeed(vector<int>& piles, int guard) {
        int n = piles.size();
        int low = 1;
        int high = INT_MAX;
        int res = -1;
        while(low <= high){
            int guess = low + (high - low) / 2;
            // Now Function calls
            int hour = fun(piles,n,guess); // we 'guess' The 'speed'
            if(hour > guard) //Low region -> Right shift
            low = guess + 1;
            else {       // //High region -> Left shift
                res = guess;
                high = guess - 1;
            }
        }
        return res;
    }
};