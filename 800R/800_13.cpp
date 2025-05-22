#include <bits/stdc++.h>
using namespace std;

bool allsame(vector<int>a)
{
  for(int i=1;i<a.size();i++)
  {
    if(a[i-1]!=a[i])
    return false;
  }
  return true;
}
int main() 
{
   int t;
   cin >> t;
   while(t--){
     int n;
     cin>>n;
     std::vector<int>a(n);
     
     for(int i=0;i<n;i++)
     {
       cin>>a[i];
     }
     
     if (allsame(a))
        {
            cout << -1 << endl;
            continue;
        }
     
     vector<int>c;
     vector<int>b;
     sort(a.begin(),a.end());
   
    int maxi=*max_element(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
      if(a[i]!=maxi)
      b.push_back(a[i]);
      else
      c.push_back(a[i]);
    }
    
    
    cout<<b.size()<<" "<<c.size()<<endl;
    for(int i=0;i<b.size();i++)
    {
      cout<<b[i]<<" ";
    }
    cout<<""<<endl;
    for(int i=0;i<c.size();i++)
    {
      cout<<c[i]<<" ";
    }
    
    
    // we dont want ke b%c==0
    // we want k b%c!=0-->
    // a[i-1]%a[i]!=0
    // b.push(a[i-1]);
    // c,push(a[i-1]);
    // else
    // b.push
   }
     
   
    return 0;
}

// b[j]=a[i] if(a[i-1]<=a[i])