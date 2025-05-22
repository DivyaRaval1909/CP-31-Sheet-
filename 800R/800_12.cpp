#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int t;
   cin >> t;
   while(t--){
     int n;
     cin>>n;
     std::vector<int>b(n) ;
     
     for(int i=0;i<n;i++)
     {
       cin>>b[i];
     }
     vector<int>a;
     a.push_back(b[0]);
     for(int i=1;i<n;i++)
     {
       a.push_back(b[i]);
       if(b[i-1]>b[i])
       a.push_back(b[i]);
       
     }
     cout<<a.size()<<endl;
     for(int i=0;i<a.size();i++)
     cout<<a[i]<<" ";
     
     cout<<""<<endl;
    // 423456
   }
     
   
    return 0;
}

// b[j]=a[i] if(a[i-1]<=a[i])