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
    vector<int>b;
    
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      b.push_back(n+1-a[i]);
    }
    
    for(int i=0;i<n;i++)
    cout<<b[i]<<" ";
    cout<<endl;
}
return 0;
}

// 5
// 1 2 4 5 3-->6
// 5 4 2 1 3