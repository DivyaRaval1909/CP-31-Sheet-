#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int t;
   cin >> t;
   while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    
    
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      
    }
    int zeros=0;
    int maxi=0;
    for(int i=0;i<n;i++)
    {
      if(a[i]==0)
      {
        zeros++;
        maxi=max(maxi,zeros);
      }
      else
      zeros=0;
    }
    cout<<maxi<<endl;
    
}
return 0;
}

// 5
// 1 2 4 5 3-->6
// 5 4 2 1 3