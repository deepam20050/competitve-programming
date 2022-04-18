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

using lli = long long;
using pii = pair < int, int >;

const int N = 1e6 + 5;

int a[N];
int b[N];
int n;

inline bool check () {
  FOR(i, 1, n + 1) {
    if (a[i] != b[i]) {
      return 0;
    }
  }
  return 1;
}

int main () {
  scanf("%d", &n);
  FOR(i, 1, n + 1) {
    scanf("%d", a + i);
  }
  FOR(i, 1, n + 1) {
    scanf("%d", b + i);
  }
  if (check()) {
    puts("0");
    exit(0);
  }
  FOR(i, 1, n + 1) {
    FOR(j, 2, n + 1) {
      a[j] ^= a[j - 1];
    }
    if (check()) {
      printf("%d\n", i);
      exit(0);
    }
  }
  puts("-1");
  return 0;
}
