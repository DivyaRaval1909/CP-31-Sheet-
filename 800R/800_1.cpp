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
    int n,k;
    cin>> n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    vector<int> kv=v;
    sort(kv.begin(),kv.end());

    if(kv==v)
    {
        cout<<"YES\n";
    }
    else
    {
        if(k==1)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }



}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t = 1;
    cin >> t;
    while (t--) solve();
    
    return 0;
}