class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.size();
        stack<char> st;
        string ans ;
        for(int i=0;i<n;i++){
            if(st.empty()){   // STACK IS EMPTY
                st.push(s[i]);
    
            }
            else if(s[i] == st.top()){    // DUPLICATE FOUND
            st.pop();
        }
            else
            st.push(s[i]);       // push UNIQUE ELEMENT IN STACK
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());

        return ans;

    }
};