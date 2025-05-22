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
     int ans=0;
     for(int i=0;i<n-1;i++)
     {
       cin>>a[i];
       ans+=a[i];
     }
     cout<<-ans<<endl;
   }
     
   
    return 0;
}

//e=w-l
//e2=w-l
//