class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        // int ans = 0;
        stack<long long int>st;
        for(auto &str:tokens){
            if(str=="+"){
                long long int a = st.top();
                st.pop();
                long long int b = st.top();
                st.pop();
                long long int c = a+b;
                st.push(c);
            }
            else if(str=="-"){
                long long int a = st.top();
                st.pop();
                long long int b = st.top();
                st.pop();
                long long int c = b-a;
                st.push(c);
            }
            else if(str=="*"){
                long long int a = st.top();
                st.pop();
                long long int b = st.top();
                st.pop();
                long long int c = a*b;
                st.push(c);
            }
            else if(str=="/"){
                long long int a = st.top();
                st.pop();
                long long int b = st.top();
                st.pop();
                // cout<<a<<" "<<b<<" |"<<endl;
                long long int c = b/a;
                st.push(c);
            }
            else{
                // cout<<str<<" ";
                // cout<<stoi(str)<<" ";
                long long int x = stoi(str);
                st.push(x);
            }
        }
        return st.top();
    }
    
};