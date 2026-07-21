class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n = arr.size();
        int cm = 1;
        int officer = 0;
        int uni = 1;
        while(cm < n){
            if(arr[cm] == arr[cm-1])
            {cm++;
            continue;
            }
            arr[officer+1] = arr[cm]; //unique element found
            officer++;
            uni++;
            cm++;
        }
        return uni;
    }
};