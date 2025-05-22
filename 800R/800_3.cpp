#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <unordered_set>
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
    string s;
    cin>>s;
    vector<int>indexes;
    int count=0;

    bool threeconsicutive=false;
    int emptycells=0;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='.'&&i+1<n&&s[i+1]=='.'&&i+2<n&&s[i+2]=='.')
        {threeconsicutive=true;
            break;
        }
        if(s[i]=='.')
        emptycells++;

    }
    if(threeconsicutive)
    cout<<2<<endl;
    else
    cout<<emptycells<<endl;
    
    
    
    // ##....#
    // #...#..#.#
    

    

    // if(indexes[0]>1)
    // count+=2;
    // if(indexes[0]==1)
    // count++;
        
    
    // int t=indexes.size();
    // if(n-1-indexes[t-1]>1)
    // count+=2;
    // if(n-1-indexes[t-1]==1)
    // count++;

   
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t = 1;
    cin >> t;
    while (t--) solve();
    
    return 0;
}