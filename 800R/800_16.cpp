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
     
     
     for(int i=0;i<n;i++)
     {
       cin>>a[i];
      
     }
     vector<int>s=a;
     sort(s.begin(),s.end());
     if(s!=a)
     {
       cout<<0<<endl;
     continue;
     }
     
     int mini=INT_MAX;
     for(int i=0;i<n-1;i++)
     {
       
       mini=min(mini,(a[i+1]-a[i]));
     }
     cout<<(mini/2)+1<<endl;
   }
   
    return 0;
}

// 10 40
// 15-15

// //e=w-l
//e2=w-l
//
//odd --> a --> mktim
