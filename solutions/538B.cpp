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
  string s; cin >> s;
  int n = sz(s);
  int mx = 0;
  for (int i = 0; i < n; ++i) {
    int x = s[i] - '0';
    mx = max(mx, x);
  }  
  vector < string > a(mx, string(n, '0'));
  for (int i = 0; i < n; ++i) {
    int x = s[i] - '0';
    for (int j = 0; j < x; ++j) {
      a[j][i] = '1';
    }
  }
  vector < string > ans;
  for (auto &e : a) {
    reverse(all(e));
    while (!e.empty() && e.back() == '0') {
      e.pop_back();
    }
    if (!e.empty()) {
      reverse(all(e));
      ans.emplace_back(e);
    }
  }
  cout << sz(ans) << '\n';
  for (auto &e : ans) {
    cout << e << " ";
  }
}

int main() {
  #ifdef DEBUG
    freopen("debug.txt", "w", stderr);
  #endif
  cin.tie(nullptr)->sync_with_stdio(false);
  int nt = 1;
  while (nt--) {
    test_case();
  }
  return 0;
}