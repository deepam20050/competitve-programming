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

const int N = 26;

int cnt[N];

void test_case() {
  string a, b; cin >> a >> b;
  a += b;
  memset(cnt, 0, sizeof cnt);
  for (auto &e : a) {
    ++cnt[e - 'a'];
  }
  int n; cin >> n;
  bool ok = 1;
  while (n--) {
    string x; cin >> x;
    for (auto &e : x) {
      ok &= cnt[e - 'a'] > 0;
      --cnt[e - 'a'];
    }
  }
  ok ? cout << "YES\n" : cout << "NO\n";
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