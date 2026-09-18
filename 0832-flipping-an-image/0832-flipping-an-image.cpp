class Solution {
public:
     void reverse(vector<vector<int>>& image,int m,int n){
        int st=0;
        int end=n-1;
        while(st<end){
            swap(image[m][st],image[m][end]);
            st++;
            end--;
        }
     }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int m=image.size();
        int n=image[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(image[i][j]==0)image[i][j]=1;
                else{
                    image[i][j]=0;
                }
                if(j==n-1){
                    reverse(image,i,n);
                }
            }
        }
        return image;
    }
};