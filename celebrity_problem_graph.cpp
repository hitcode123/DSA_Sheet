#include <bits/stdc++.h> 
/*
	This is signature of helper function 'knows'.
	You should not implement it, or speculate about its implementation.

	bool knows(int A, int B); 
	Function 'knows(A, B)' will returns "true" if the person having
	id 'A' know the person having id 'B' in the party, "false" otherwise.
*/
using namespace std;
int findCelebrity(int n) {
 	// Write your code here.
	 vector<vector<bool>> res(n,vector<bool>(n,false));
	 stack<int> st;
	 for(int i=0;i<n;i++)
	 {
		 st.push(i);
	 }

	 while(st.size()>1)
	 {
		 int first=st.top();
		 st.pop();
		 int second=st.top();
		 st.pop();
		//  if(knows(first,second))
		 {
			 st.push(second);
		 }
		//  else
		 {
			 st.push(first);
		 }
	 }
	 int mcan=st.top();
	 st.pop();
	//  for(int i=0;i<n;i++)
    //  {
	// 	 for(int j=0;j<n;j++)
	// 	 {
	// 		 if(i==j)
	// 		 {
	// 			 continue;
	// 		 }
	// 		 res[i][j]=knows(i,j);
	// 	 }
	//  }

	 
		 int count_row=0;
		 int count_col=0;
		 for(int j=0;j<n;j++)
		 {
			 if(res[mcan][j])
			 {
				 count_row++;
			 }
			 if(res[j][mcan])
			 {
				 count_col++;
			 }
		 }
		 if(count_col==n-1&&count_row==0)
		 {
		   return mcan;
		 }
	 return -1;
}

int main()
{

    return 0;
}