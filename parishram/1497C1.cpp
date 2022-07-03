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
  int n, k; cin >> n >> k;
  if (n & 1) {
    cout << 1 << " " << n / 2 << " " << n / 2 << '\n';
  } else if (n % 4 == 0) {
    cout << n / 2 << " " << n / 4 << " " << n / 4 << '\n';
  } else {
    cout << 2 << " " << n / 2 - 1 << " " << n / 2 - 1 << '\n';
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