class Solution {
public:
    bool canAliceWin(int n) {
        int turn=0;
        int rem=10;
        while (n >=rem) {
            n-=rem;
            turn++;
            rem--;
        }
        return turn%2==1;
    }
};