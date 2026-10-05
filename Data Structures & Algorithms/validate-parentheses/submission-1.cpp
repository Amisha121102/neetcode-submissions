class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c : s){
            if(c == '(' || c == '[' || c == '{'){
                st.push(c);
            }
            else{
                if(st.empty()){
                    return false;
                }
                char popped = st.top();
                st.pop();
                if(!((c == '}' && popped == '{') || (c == ')' && popped == '(') || (c == ']' && popped == '['))){
                    return false;
                }
            }
        }
        if(st.size()>0){
            return false;
        }
        else{
        return true;
        }
    }
};
