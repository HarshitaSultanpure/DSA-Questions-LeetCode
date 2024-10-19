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
	leading to a runtime error (like a segmentation fault or out-of-bounds access).
	*/
