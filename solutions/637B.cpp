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

string a[N];

void test_case() {
  int n; cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  set < string > s;
  for (int i = n - 1; i >= 0; --i) {
    if (s.find(a[i]) == s.end()) {
      cout << a[i] << '\n';
      s.emplace(a[i]);
    }
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
