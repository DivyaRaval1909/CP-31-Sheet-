#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;

#define ll long long
#define int long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define endl "\n"

typedef vector<int> vi;
typedef pair<int, int> pi;

const int MOD = 1e9+7;
const int INF = 1e18;

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int>kk=a;
    sort(all(kk));
    if(kk==a)
    {cout<<"yes"<<endl;
        return ;
    }

    else
    {
        if(a[0]==1)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
    
//     bool cndn;
//     do{
//         cndn=false;
//          for(int i=1;i<n-1;i++)
//     {
        
//        if(a[i]>a[i+1] && a[i]>a[i-1])
//        {
//         swap(a[i],a[i+1]);
//         cndn=true;
//        }

  
//     }

// }
//     while(cndn);
   
//     if(kk==a)
//     {
//         cout<<"YES"<<endl;
//     }else
//     cout<<"NO"<<endl;

}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t = 1;
    cin >> t;
    while (t--) solve();
    
    return 0;
}