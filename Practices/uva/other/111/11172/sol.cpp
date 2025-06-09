#include <bits/stdc++.h>
#define endl "\n"
#define endll "\n\n"
#define pb push_back
#define IO ios_base::sync_with_stdio(0);
#define ll long long
#define inf 0x3f3f3f3f
#define MAXN maxn
#define MODN modn

#define DD(x) cout << #x << " = " << x << endl
#define tt cout << "test" << endl
#define fe(v) for(auto x : v) cout << x << " "; cout << endl
#define pii pair<ll, ll>
#define vi vector<ll>
#define vvi vector<vi>
#define cmp greater<ll>
#define all(v) v.begin(), v.end()

using namespace std;

// ---------------------------------------------------------------- //

class Solution {
    public:
        Solution() {}
        ~Solution() {}
        static void solve(){
            ll t;
            cin >> t;
            while (t--) {
                ll a, b;
                cin >> a >> b;
                cout << (a < b ? "<" : (a > b ? ">" : "=")) << endl;
            }
        }
    private:
};

signed main() {
    IO;
    #ifdef DEBUG
        cin.tie(0);cout.sync_with_stdio(0);
        freopen(DEBUG "/t.in", "r", stdin);
        freopen(DEBUG "/t.out", "w", stdout);
    #endif

    Solution::solve();

    return EXIT_SUCCESS;
}