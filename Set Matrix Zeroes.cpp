class Solution {
public:

    void setRowCol(vector<vector<int>> &temp,int r,int c,int m,int n)
    {
        for(int i=0;i<n;i++) // for marking rows as zero
            temp[r][i] = 0;

        for(int j=0;j<m;j++) // for marking col as zero
            temp[j][c] = 0;
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();

        vector<vector<int>> temp = matrix;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j] == 0)
                    setRowCol(temp,i,j,m,n); // function to mark rows and cols as zero
            }
        }
        matrix = temp;
    }
};