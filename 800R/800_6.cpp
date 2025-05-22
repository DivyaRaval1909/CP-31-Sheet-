#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

#define int long long
#define endl "\n"

void solve() {
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }

    if (mp.size() == 1) {
        cout << "yes" << endl;
    }
    else if (mp.size() == 2) {
        auto it = mp.begin();
        int freq1 = it->second;
        it++;
        int freq2 = it->second;

        if ((freq1 == n / 2 && freq2 == (n + 1) / 2) || 
            (freq2 == n / 2 && freq1 == (n + 1) / 2)) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    else {
        cout << "no" << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}
