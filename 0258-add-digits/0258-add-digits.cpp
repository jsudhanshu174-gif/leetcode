class Solution {
public:
    int addDigits(int num) {
        if(num<10)return num;

         return (num - 1) % 9 + 1 ;
    //     while(num>10){
    //         int sum=0;
    //        string s=to_string(num);
    //        for(int i=0;i<s.size();i++){
    //         sum+=s[i]-'0';
    //        }
    //        num=sum;
    //     }
    //     return num;
    }
};