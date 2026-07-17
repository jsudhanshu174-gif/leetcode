/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int pick;
      
        int st = 1;
        int end = n;
        for (int i = 1; i <= n; i++) {
            int mid = st + (end - st) / 2;
          int guss=guess(mid);
            if (guss == 0) {
                return mid;
            }

            else if (guss ==1) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return 0;
    }
};