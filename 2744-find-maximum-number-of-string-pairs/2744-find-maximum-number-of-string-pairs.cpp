class Solution {
public:
    string reverse ( string s){
        string t=s; 
        string ans="";
        for(int i=s.size()-1;i>=0;i--){
            ans+=s[i];
        }
        return ans;
    }
    void count (int i,vector<string>& words,int& cnt,string s){
        for(int j=i;j<words.size();j++){
            if(s==words[j]) cnt++;
        }
    }
    int maximumNumberOfStringPairs(vector<string>& words) {
        int cnt=0;
        for(int i=0;i<words.size();i++){
            string s=reverse (words[i]);
            count(i+1,words,cnt,s);
            
        }
        return cnt;
    }
};