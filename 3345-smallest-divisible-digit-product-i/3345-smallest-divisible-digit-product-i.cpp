class Solution {
public:
    int smallestNumber(int n, int t) {
        if(t>n||n==t)return t;
        
        for (int i = n; i <= 100; i++) {
            string s = to_string(i);
            if(s.size()==1){
                if((s[0]-'0')%t==0 && i>=n)return i;
            }
            else if ((s[0]-'0')*(s[1]-'0')%t == 0 && i >= n)
                return i;

            else{
                if(s.size()==3)return 100;
            }    
        }
        return n;
    }
};