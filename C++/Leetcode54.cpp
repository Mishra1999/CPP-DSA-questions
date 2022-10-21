// c++ program to print a matrix elements in spiral order using Recursion
class Solution {
public:
    vector<int> ans;
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        traverse(matrix,0,0,m,n);
        return ans;
    }
    void traverse(vector<vector<int>>& matrix,int i,int j,int m,int n){
        if(i>=m || j>=n) return;
        for(int k=j;k<n;k++){
            ans.push_back(matrix[i][k]);
        }
        for(int k=i+1;k<m;k++){
            ans.push_back(matrix[k][n-1]);
        }
        //first and last row are not same
        if(i!=m-1){
            for(int k=n-2;k>=j;k--){
                ans.push_back(matrix[m-1][k]);
            }
        }
    if(j!=n-1){
        for(int k=m-2;k>i;k--){
            ans.push_back(matrix[k][j]);
        }
    }
        traverse(matrix,i+1,j+1,m-1,n-1);
    }
};
//time complexity - O(m*n)
//space complexity - O(1)
