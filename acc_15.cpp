#include<bits/stdc++.h>
using namespace std;
int main()
{  
    //  int n;
    //  cin>>n;
    //  char str[n];
    string str;
    cin>>str;
    //  for(int i=0;i<n;i++)
    //  {
    //     char temp;
    //     cin>>temp;
    //     str[i]=temp;
    //  }
     string s1;
     int count_h=0;
     int count_nh=0;
     
     for(int i=0;i<str.length();i++)
     {
        if(str[i]=='-')
        {
           count_h++;
        }
        else
        {
            s1.push_back(str[i]);
        }
        
     }
    //  cout<<s1;
     string hp;
     while(count_h>0)
     {
        hp.push_back('-');
        count_h--;
     }
     cout<<"hence the required answer :"<<" "<<hp+s1;
    return 0;
}