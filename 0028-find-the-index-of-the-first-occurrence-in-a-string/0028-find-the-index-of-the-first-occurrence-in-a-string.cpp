class Solution {
public:
    int strStr(string haystack, string needle) {
     
         int i= haystack.find(needle);
        if (i == string::npos)
            return -1;
        return i;
    }
};