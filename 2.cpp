#include <bits/stdc++.h> 
using namespace std;
void swap(int i, int j,vector<int> &permutation)
{
    int temp=permutation[i];
    permutation[i]=permutation[j];
    permutation[j]=temp;
    // cout<<permutation[i]<<" "<<permutation[j]<<endl;
}
vector<int> nextPermutation(vector<int> &permutation, int n)
{

    
        for(int j=n-1;j>=1;j--)
        {
           if(permutation[j-1]<permutation[j])
           {   
               int count=n-1;
               while(count>j-1)
               {
                   if(permutation[count]>permutation[j-1])
                   {
                       swap(count,j-1,permutation);
                       break;
                   }
                   count--;
               }
               reverse(permutation.begin()+j,permutation.end());
               return permutation;
           }
        }
        reverse(permutation.begin(),permutation.end());
        return permutation;

    
}
int main()
{  
    vector<int> res={4,3,2,1};
    vector<int> outputlist=nextPermutation(res,4);
    for(int i=0;i<4;i++)
    {
        cout<<res[i]<<" "<<endl;
    }

    return 0;
}