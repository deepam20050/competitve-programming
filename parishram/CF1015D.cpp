#include "bits/stdc++.h"
using namespace std;

#define sz(x) int((x).size())
#define all(x) begin(x), end(x)
#define eb emplace_back
#define em emplace
#define mp make_pair
#define F first
#define S second
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define lb lower_bound
#define ub upper_bound

using lli = long long;
using pii = pair < int, int >;

int main () {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k;
  lli s; cin >> s;
  if (k > s || (n - 1) * 1ll * k < s) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
    int curr = 1;
    while (k > 0) {
      lli dist = min(1ll * (n - 1), s - 1ll * (k - 1));
      if (curr - dist > 0) {
        curr -= dist;
      } else {
        curr += dist;
      }
      cout << curr << " ";
      s -= dist;
      --k;
    }
  }
  return 0;
}
