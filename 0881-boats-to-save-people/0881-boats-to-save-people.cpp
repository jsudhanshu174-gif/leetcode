class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int i=0;
        int j=people.size()-1;
        int cnt=0;
        sort(people.begin(),people.end());
        while(i<=j){
            if(people[i]+people[j]==limit){
                i++;
                j--;
                cnt++;
            }
           
            else if(people[i]+people[j]>limit){
                j--;
                cnt++;
            }
            else if(people[i]+people[j]<limit){
                i++;
                j--;
                cnt++;
            }else{
                cnt++;
            }
            
        }
        return cnt;
    }
};