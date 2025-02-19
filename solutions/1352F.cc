#include "bits/stdc++.h"
using namespace std;

#ifdef DEBUG
  #include "../algo/debug.hpp"
#else
  #define debug(...)
#endif
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define sz(x) int((x).size())
#define all(x) begin(x), end(x)
#define eb emplace_back

using lli = long long;
using pii = pair < int, int >;

void test_case() {
  int n0, n1, n2; cin >> n0 >> n1 >> n2;
  if (n1 == 0) {
    if (n2) {
      cout << string(n2 + 1, '1');
    } else {
      cout << string(n0 + 1, '0');
    }
    cout << '\n';
    return;
  }
  string ans = string(n2 + 1, '1') + string(n0 + 1, '0');
  --n1;
  for (int i = 1; i <= n1; ++i) {
    if (i & 1) {
      ans += "1";
    } else {
      ans += "0";
    }
  }
  cout << ans << '\n';
}

int main() {
  #ifdef DEBUG
    freopen("debug.txt", "w", stderr);
  #endif
  cin.tie(nullptr)->sync_with_stdio(false);
  int nt = 1;
  cin >> nt;
  while (nt--) {
    test_case();
  }
  return 0;
}