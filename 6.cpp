#include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
using namespace std;

/*

	Time Complexity: O(N * M)
	Space Complexity: O(max(N, M)), 

    Where N is the number of rows and M is the number of columns in the matrix.

*/

void rotateMatrixHelper(vector<vector<int>> &mat, int rowStart, int colStart, int rowEnd, int colEnd)
{
    // Base Condition
    if(rowStart >= rowEnd or colStart >= colEnd)
    {
        return; 
    }

    if (rowStart >= rowEnd - 1 || colStart >= colEnd - 1)
    { 
        return; 
    }

    int previous = mat[rowStart + 1][colStart]; 
    int current;
        
    // Move elements of first row from the remaining rows
    for (int i = colStart; i < colEnd; i++) 
    { 
        current = mat[rowStart][i]; 
        mat[rowStart][i] = previous; 
        previous = current; 
    } 

    rowStart++; 

    // Move elements of last column from the remaining columns 
    for (int i = rowStart; i < rowEnd; i++) 
    { 
        current = mat[i][colEnd-1]; 
        mat[i][colEnd-1] = previous; 
        previous = current; 
    } 
    colEnd--; 

    // Move elements of last row from the remaining rows 
    if (rowStart < rowEnd) 
    { 
        for (int i = colEnd - 1; i >= colStart; i--) 
        { 
            current = mat[rowEnd-1][i]; 
            mat[rowEnd-1][i] = previous; 
            previous = current; 
        } 
    } 
    rowEnd--; 

    // Move elements of first column from the remaining rows 
    if (colStart < colEnd) 
    { 
        for (int i = rowEnd-1; i >= rowStart; i--) 
        { 
            current = mat[i][colStart]; 
            mat[i][colStart] = previous; 
            previous = current; 
        } 
    } 
    colStart++; 

    // Recursively rotate inner rings
    rotateMatrixHelper(mat, rowStart, colStart, rowEnd, colEnd);

}

int main()
{
    // Recursive function to rotate the matrix


	 int T;
    cin>>T;
    while(T--)
    {
        int m,n;
        cin>>m>>n;
        vector<vector<int>> res(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
        {   
            
            for(int j=0;j<n;j++)
            {
                int temp;
                cin>>temp;
                res[i][j]=temp;
            }
        }
        rotateMatrixHelper(res,0,0,m,n);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<res[i][j]<<" ";
            }
        cout<<endl;
        }
    }
}