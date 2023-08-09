 #include<iostream>
 using namespace std;
 int main()
 {
    int n,m;
    cin>>n>>m;
    int div_m=0;
    int ndiv_m=0;
    for (int i = 0; i<=n; i++)
    {
        if(i%m==0)
        {
            div_m+=i;
        }
        else
        {
          ndiv_m+=i;
        }
    }
    cout<<abs(div_m-ndiv_m);
    
    return 0;
 }