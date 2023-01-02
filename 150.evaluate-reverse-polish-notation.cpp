/*
 * @lc app=leetcode id=150 lang=cpp
 *
 * [150] Evaluate Reverse Polish Notation
 */

// @lc code=start
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto x: tokens){
            if(x=="+" || x=="-" || x=="*" || x=="/"){
                int a = st.top(); st.pop();
                int b=  st.top(); st.pop();
                if(x=="+")st.push(a+b);
                if(x=="-") st.push(b-a);
                if(x=="*")st.push(a*b);
                if(x=="/")st.push(b/a);
            }
            else {
               int data = stoi(x);
                st.push(data);
            }
        }
        return st.top();
    }
};
// @lc code=end

