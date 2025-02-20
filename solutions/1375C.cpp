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
   for (auto &e : a) {
      cin >> e;
   } 
   auto it = max_element(all(a));
   if (it == a.end() - 1) {
      cout << "YES\n";
   } else if (it == a.begin()) {
      cout << "NO\n";
   } else {
      a[0] < a[n - 1] ? cout << "YES\n" : cout << "NO\n";
   }
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