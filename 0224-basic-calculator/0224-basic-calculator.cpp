class Solution {
public:
    int calculate(string s) {
        long  num=0;
        long ans=0;
        stack<int>st;
        int sign=1;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                num=(num*10)+s[i]-'0';
            }else if(s[i]=='+'){
                ans+=num*sign;
                num=0;
                sign=1;
            }else if(s[i]=='-'){
                ans+=num*sign;
                num=0;
                sign=-1;
            }else if(s[i]=='('){
                ans+=num*sign;
                num=0;
                st.push(ans);
                st.push(sign);
                sign=1;
                ans=0;
            }else if(s[i]==')'){
                ans+=num*sign;
                num=0;
                int s=st.top();
                st.pop();
                int t=st.top();
                st.pop();
                ans*=s;
                ans+=t;
            }

        }
        ans+=num*sign;
        return ans;
    }
};