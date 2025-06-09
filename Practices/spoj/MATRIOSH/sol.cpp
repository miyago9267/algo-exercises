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
        static void solve() {
            vi v;
            string s;
            while (getline(cin, s)) {
                if (s == "") break;
                stringstream ss(s);
                ll x;
                while (ss >> x) v.pb(x);
                cout << result[checkMatrioshka(v)] << endl;
                v.clear();
            }
        };
    private:
        static bool checkMatrioshka(vector<ll> &v) {
            stack<ll> s;
            stack<ll> leftSpace;
            for (ll i = 0; i < v.size(); i++) {
                if (v[i] < 0) {
                    s.push(v[i]);
                    leftSpace.push(0);
                } else {
                    if (s.empty() || s.top() != -v[i]) return false;
                    s.pop();
                    ll innerleftSpace = leftSpace.top(); leftSpace.pop();
                    if (innerleftSpace >= v[i]) return false;
                    if (!leftSpace.empty()) {
                        ll parentleftSpace = leftSpace.top(); leftSpace.pop();
                        parentleftSpace += v[i];
                        leftSpace.push(parentleftSpace);
                    }
                }
            }
            return s.empty();
        }
        static inline string result[2] = {
            ":-( Try again.", ":-) Matrioshka!"
        };
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