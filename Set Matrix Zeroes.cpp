/*
Problem Statement:
Given an m x n integer matrix, if an element is 0, set its entire row and column to 0s.

For example:
    1    1    1           1    0    1
    1    0    1    ->     0    0    0
    1    1    1           1    0    1
    
Solution Approach:

This solution uses an auxiliary matrix temp to make changes to rows and columns without affecting the original matrix during iteration.

Steps:

Copy the original matrix into a new matrix temp.
Iterate through the original matrix, and whenever a 0 is found, use a helper function to set the corresponding row and column in temp to 0.
After the iteration is complete, copy the updated temp matrix back to the original matrix.
Key Functions:

setRowCol: This helper function sets all elements in the specified row and column to 0.
This approach ensures the matrix is transformed according to the problem's requirements without modifying it while iterating.
*/
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
