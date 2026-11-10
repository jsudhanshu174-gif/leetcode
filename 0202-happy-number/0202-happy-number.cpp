class Solution {
public:
    bool isHappy(int n) {
        map<int,int>mpp;
      while(n>0){
        int num=n;
        int sum=0;
        while(num>0){
        sum+=(num%10)*(num%10);
        num=num/10;
        }
        if(sum==1) return true;
        if(mpp[sum]++)return false;
        n=sum;
      }
      return true;
    }
};