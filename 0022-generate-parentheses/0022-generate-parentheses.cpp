class Solution {
public:
    void genrate(int open,int close,string s,vector<string>&ans){
        if(open==0&&close==0){
            ans.push_back(s);
            return ;

        }
        if(open>0){
            string curr=s+'(';
            genrate(open-1,close,curr,ans);
        }
        if(open<close){
            string curr=s+')';
            genrate(open,close-1,curr,ans);
        }
    }
    vector<string> generateParenthesis(int n) {
       vector<string>ans;
       string s="";
       genrate(n,n,s,ans);
       return ans; 
    }
};