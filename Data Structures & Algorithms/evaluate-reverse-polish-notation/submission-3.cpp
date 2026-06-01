class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int i=0;
        int firstNum, secondNum;
        while(i<tokens.size()){
            if(tokens[i] == "+"){
                secondNum = st.top(); st.pop();
                firstNum = st.top(); st.pop();
                st.push((firstNum+secondNum));
            }
            else if(tokens[i] == "-"){
                secondNum = st.top(); st.pop();
                firstNum = st.top(); st.pop();
                st.push((firstNum-secondNum));
            }
            else if(tokens[i] == "*"){
                secondNum = st.top(); st.pop();
                firstNum = st.top(); st.pop();
                st.push((firstNum*secondNum));
            }
            else if(tokens[i] == "/"){
                secondNum = st.top(); st.pop();
                firstNum = st.top(); st.pop();
                st.push((firstNum/secondNum));
            }
            else{
                st.push(stoi(tokens[i]));
            }
            i++;
        }
        return st.top();
    }
};