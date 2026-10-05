class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(auto t : tokens){
            if(t == "+" || t == "-" || t == "*" || t == "/" ){
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                if( t == "+") s.push(a+b);
               else if( t == "-") s.push(b-a);
               else if( t == "*") s.push(a*b);
                else s.push(b/a);
            }
            else{
                s.push(stoi(t));
            }
        }
        return s.top();
    }
};
