#include<bits/stdc++.h>
using namespace std;
int main()
{

    int num1,num2;
    cin>>num1>>num2;
    int carry=0;
    int count=0;
    while(num1>0&&num2>0)
    {
        int val1=num1%10;
        int val2=num2%10;
        
        num1=num1/10;
        num2=num2/10;
        if((val1+val2+carry)>9)
        {    
            carry=(val1+val2+carry)/10;
            count++;
        }
        else
        {
            carry=0;
        }
    }
    while(num1>0)
    {
        int val1=(num1%10+carry)%10;
        int val2=(num1%10+carry)/10;
        carry=val2;
        num1=num1/10;
        if(carry>0)
        {
            count++;
        }
        else
        {
            carry=0;
        }
    }
    while(num2>0)
    {
        int val1=(num2%10+carry)%10;
        int val2=(num2%10+carry)/10;
        num2=num2/10;
        carry=val2;
        if(carry>0)
        {
            count++;
        }
        else
        {
            carry=0;
        }
    }
    cout<<count<<endl;
    return 0;
}