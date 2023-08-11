#include<iostream>
using namespace std;

bool cal_248(int number)
{
    int count_2=0;
    int count_4=0;
    int count_8=0;
    while(number>0)
    {
         if(number%10==2)
         {
            count_2++;
         }
         else if(number%10==4)
         {
            count_4++;
         }
         else if(number%10==8)
         {
            count_8++;
         }
        number=number/10;
        
    }
     if(count_2==count_4&&count_4==count_8&&count_2>0)
         {
            return true;
         }
         
         return false;
}
int main()
{

    int upper_range;
    cin>>upper_range;
     int count=0;
    for(int i=248;i<=upper_range;i++)
    {
        if(cal_248(i)==true)
        {
            count++;
        }

    }
    cout<<count<<endl;
    return 0;
}