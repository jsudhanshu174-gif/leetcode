class Solution {
public:
    void answer(string digit,string output,int index,vector<string>&ans,string mapp[]){
        if(index>=digit.size()){
            ans.push_back(output);
            return;
        }
        int num=digit[index]-'0';
        string val=mapp[num];
        for(int i=0;i<val.size();i++){
            output.push_back(val[i]);
            answer(digit,output,index+1,ans,mapp);
            output.pop_back();
        } 
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        string output;
        string mapp[10]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        answer(digits,output,0,ans,mapp);
        return ans;
    }
};