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
  int n; cin >> n;
  vector < int > a(n);
  iota(all(a), 0);
  int ans = 1e9;
  auto v = a;
  do {
    int mx = 0;
    for (int i = 1; i < n; ++i) {
      mx = max(mx, a[i] ^ a[i - 1]);
    }
    if (mx < ans) {
      ans = mx;
      v = a;
    }
  } while (next_permutation(all(a)));
  cout << "= " << ans << '\n';
  for (auto &e : v) {
    cout << e << " ";
  }
  cout << '\n';
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