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
  string s; cin >> s;
  s = "0" + s;
  vector < int > a(n + 1);
  for (int i = 1; i <= n; ++i) {
    a[i] = 9 - (s[i] - '0');
  }
  if (a[1]) {
    for (int i = 1; i <= n; ++i) {
      cout << a[i];
    }
    cout << '\n';
    return;
  }
  for (int i = 1; i <= n; ++i) {
    ++a[i];
  }
  ++a[n];
  for (int i = n; i >= 1; --i) {
    a[i - 1] += a[i] / 10;
    a[i] %= 10;
  }
  for (int i = 1; i <= n; ++i) {
    cout << a[i];
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