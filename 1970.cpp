#include <bits/stdc++.h>

using namespace std;

#define MAXN 110

int n, k;
int memo[MAXN][60][60][60], d[MAXN], c[3];

int dp(int i, int c1, int c2, int c3) {
  int e1 = 0, e2 = 0, e3 = 0, e4 = 0;
  if (i == n) return 0;
  if (memo[i][c1][c2][c3] != -1) return memo[i][c1][c2][c3];
  e1 = dp(i + 1, c1, c2, c3);
  if (d[i] <= c1) e2 = dp(i + 1, c1 - d[i], c2, c3) + d[i];
  if (d[i] <= c2) e3 = dp(i + 1, c1, c2 - d[i], c3) + d[i];
  if (d[i] <= c3) e4 = dp(i + 1, c1, c2, c3  - d[i]) + d[i];
  return memo[i][c1][c2][c3] = max(e1, max(e2, max(e3, e4)));
}

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  memset(c, 0, sizeof(c));
  cin >> n >> k;
  for (int i = 0; i < n; i++) cin >> d[i];
  for (int i = 0; i < k; i++) cin >> c[i];
  memset(memo, -1, sizeof(memo));
  cout << dp(0, c[0], c[1], c[2]) << '\n';
  
  return 0;
}