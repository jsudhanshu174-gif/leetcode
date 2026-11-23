class Solution {
public:
    string getPermutation(int n, int k) {
       int fact=1;
       vector<int>ans;
       for(int i=1;i<n;i++){
        fact=fact*i;
        ans.push_back(i);
       }
       ans.push_back(n);
       string s="";
       k=k-1;
       while(true){
        s=s+to_string(ans[k/fact]);
        ans.erase(ans.begin()+k/fact);
        if(ans.size()==0){
            break;
        }
        k=k%fact;
       fact=fact/ans.size(); 
       }
       return s;
    }
};