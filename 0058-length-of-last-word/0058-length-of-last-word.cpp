class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0;
        int ans=0;
        int i=s.size()-1;
        while(i>=0){
            while(s[i]==' ') {
                i--;
            }
            if(s[i]!=' '){
                cnt++;
                if(i==0||s[i-1]==' '){
                    break;
                }
                i--;
            }
        }
        return cnt;
    }
};