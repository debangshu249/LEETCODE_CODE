class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char> st;
        for(int i=0;i<n;i++){
            if( s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            else if(!st.empty() &&
       ((s[i] == ')' && st.top() == '(') ||
        (s[i] == '}' && st.top() == '{') ||
        (s[i] == ']' && st.top() == '['))) {

    st.pop();
}
            else {
                return false; //During loop: "Did I find a wrong closing bracket?" → false
            }
        }
        if(!st.empty())
            return false;  //After loop: "Are any opening brackets still left?" → false
        else 
            return true;    
    }
};