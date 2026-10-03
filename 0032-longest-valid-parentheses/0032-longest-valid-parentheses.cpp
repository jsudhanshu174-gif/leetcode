class Solution {
public:
    int longestValidParentheses(string s) {
        int left =0;
        int right=0;
        int Max=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') left++;
            else if (s[i]==')')right++;

            if(right>left){
                left=0;
                right=0;
            }
            if(left==right){
                Max=max(Max,left*2);
            }
        }
         left =0;
         right=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='(') left++;
            else if (s[i]==')')right++;

            if(left>right){
                left=0;
                right=0;
            }
            if(left==right){
                Max=max(Max,left*2);
            }
        }
        return Max;
    }
};