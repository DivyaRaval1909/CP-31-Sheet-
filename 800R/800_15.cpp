#include <bits/stdc++.h>
using namespace std;


int main() 
{
   int t;
   cin >> t;
   while(t--){
     int n;
     cin>>n;
     std::vector<int>a(n) ;
     int sum=0;
     
     for(int i=0;i<n;i++)
     {
       cin>>a[i];
       sum+=a[i];
     }
    if(sum%2==0 & a.size()>1)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
   }
   
    return 0;
}

