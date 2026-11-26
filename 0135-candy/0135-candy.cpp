class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> candy(ratings.size(), 1);
        if(ratings.size() < 2) return ratings.size();
        for(int i=1;i<ratings.size();i++){
            if(ratings[i]>ratings[i-1]){
               candy[i]=candy[i-1]+1;
            }
        } 
        for(int i=ratings.size()-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
candy[i] = max(candy[i], candy[i+1] + 1);
            }
        } 
        int ans=0;
        for(int i=0;i<candy.size();i++){
            ans+=candy[i];
        }
        return ans;
    }
};