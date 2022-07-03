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

const int N = 2e5 + 5;

int a[N];

void test_case() {
  int n; cin >> n;
  for (int i = 1; i <= n; ++i) {
    cin >> a[i];
  }
  if (a[n - 1] > a[n]) {
    cout << -1 << '\n';
    return;
  }
  if (a[n] >= 0) {
    cout << n - 2 << '\n';
    for (int i = 1; i <= n - 2; ++i) {
      cout << i << " " << n - 1 << " " << n << '\n';
    }
  } else {
    if (is_sorted(a + 1, a + n + 1)) {
      cout << 0 << '\n';
    } else {
      cout << -1 << '\n';
    }
  }
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  #ifdef DEBUG
    freopen("debug.txt", "w", stderr);
  #endif
  int nt = 1;
  cin >> nt;
  while (nt--) {
    test_case();
  }
  return 0;
}