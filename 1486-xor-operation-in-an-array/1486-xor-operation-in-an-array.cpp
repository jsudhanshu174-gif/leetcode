class Solution {
public:
    // int xor1(int x) {
    //     if (x % 4 == 1)
    //         return 1;
    //     else if (x % 4 == 2)
    //         return x + 1;
    //     else if (x % 4 == 3)
    //         return 0;

    //     else if (x % 4 == 0)
    //         return x;
    //     return -1;
    // }

    int xorOperation(int n, int start) {
        int cnt=1;
        int ans=start;
        for (int i=start+2;cnt<n;i+=2){
            ans=ans^i;
            cnt ++;
        }
        return ans;
    }
};