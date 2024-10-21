/*
Problem Statement:
Given an integer numRows, return the first numRows of Pascal's Triangle. 
Each number in Pascal's Triangle is the sum of the two numbers directly above it.

For example:
Input : 
	5
Output :
        1
       1 1
      1 2 1
     1 3 3 1
    1 4 6 4 1

Solution Approach:
The solution uses a 2D vector to store the rows of Pascal's Triangle. Each row is built iteratively:

* The first and last elements of each row are always set to 1.
* The intermediate elements are calculated as the sum of the two numbers above them from the previous row.
	To ensure memory is allocated properly, each row is resized before assigning values
*/

Solution:

class Pascal's_Triangle {
public:
    vector<vector<int>> generate(int numRows) {
        
        int n=numRows,i,j;
        vector<vector<int>> res(n);
        
        for(i=0;i<n;i++)
        {
            res[i].resize(i + 1); // to declare the size of each row

            for(j=0;j<=i;j++)
            {
                if(j==0 || j==i) 
                    res[i][j] = 1;
                else 
                    res[i][j] = res[i-1][j-1] + res[i-1][j];
            }
        }
        return res;
    }
};

/*
why to use (res[i].resize(i + 1);)
	Without resizing, the program will try to access or modify memory that hasn't been allocated, 
	 which can lead to runtime errors like segmentation faults or out of bound.
	*/
