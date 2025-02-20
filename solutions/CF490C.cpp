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

char s[N];
int n;
int a, b;
int p[N];

void print (int l, int r) {
  while (l <= r) {
    putchar(s[l++]);
  }
}

int main () {
  scanf("%s", s + 1);
  scanf("%d %d", &a, &b);
  n = strlen(s + 1);
  FOR(i, 1, n) {
    p[i] = (10 * p[i - 1] + s[i] - '0') % a;
  }
  int suff = 0;
  int pw10 = 1;
  for (int i = n; i > 1; --i, pw10 *= 10, pw10 %= b) {
    suff = (pw10 * (s[i] - '0') + suff) % b;
    if (s[i] != '0' && p[i - 1] == 0 && suff == 0) {
      puts("YES");
      print(1, i - 1);
      puts("");
      print(i, n);
      return 0;
    }
  }
  puts("NO");
  return 0;
}
