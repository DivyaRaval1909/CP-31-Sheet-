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
   int n,x;
   cin>>n>>x;
   vector<int>v(n);
   for(int i=0;i<n;i++)
   {
    cin>>v[i];
   }
   vector<int> dists;
   int d1=v[0];
   dists.push_back(d1);
   for(int i=0;i<n-1;i++)
   {
    dists.push_back(v[i+1]-v[i]);
   }
   int dlast=(x-v[n-1])*2;
   dists.push_back(dlast);

   int ans=INT_MIN;
   for(int i=0;i<dists.size();i++)
   {
    ans=max(ans,dists[i]);
   }
   cout<<ans<<"\n";

  
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t = 1;
    cin >> t;
    while (t--) solve();
    
    return 0;
}