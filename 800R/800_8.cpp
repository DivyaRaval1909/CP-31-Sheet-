#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        std::vector<int>a(n);
        for(int i=0;i<n;i++)
        {
          cin>>a[i];
        }
        if(find(a.begin(),a.end(),k)!=a.end())
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
    return 0;
}
// 1 sized subarray also works iykyk