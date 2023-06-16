#include <bits/stdc++.h> 
using namespace std;
//  sort 0s 1s and 2s dutch flag question
void swap(int i,int j,int * arr)
{
   int temp=arr[i];
   arr[i]=arr[j];
   arr[j]=temp;
}
void sort012(int *arr, int n)
{
   // sort(arr,arr+n); implementation one 
   int z_p=0;
   int r_p=0;
   int t_p=n-1;
   while(r_p<=t_p)
   {
      if(arr[r_p]==0)
      {
         swap(z_p,r_p,arr);
         z_p++;
         r_p++;


      }
      else if(arr[r_p]==1)
      {
         r_p++;
      }
      else if(arr[r_p]==2)
      {
         if(arr[t_p]==0)
         {
            swap(t_p,r_p,arr);
            t_p--;
            swap(r_p,z_p,arr);
            z_p++;
            r_p++;


         }
         else if(arr[t_p]==2){
            t_p--;
         }
         else
         {
            swap(r_p,t_p,arr);
            r_p++;
            t_p--;
         }
      }

   }
   


   
   
}


int main()
{
    int arr[]={0,1,1,0,2,2,0,0,1,1};
    sort012(arr,sizeof(arr)/sizeof(int));
    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}