#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        string curr = x;
        int ans = -1;

        for (int op = 0; op <= 5; ++op) {
            if (curr.find(s) != string::npos) {
                ans = op;
                break;
            }
            curr += curr; 
        }

        cout << ans << endl;
    }
    return 0;
}
