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
    
    int neg=0;
    int pos=0;
    
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
     if(a[i]==-1) neg++;
      else pos++;
    }
    int opp=0;
    
      while(neg>pos)
      {
        neg--;
        pos++;
        opp++;
      }
      
      if(neg%2==1)
      opp++;
    
    
    cout<<opp<<endl;
    
    


   
}
return 0;
}