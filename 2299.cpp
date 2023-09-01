#include <bits/stdc++.h>

using namespace std;

#define MAXC 1010
#define MAXF 60

int cC, fC, test;
int f[MAXF], v[MAXC], w[MAXC], dp[MAXF][MAXC];

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  while (cin >> cC >> fC && (cC + fC)) {
    int ans = 0;
    for (int i = 1; i <= fC; i++) cin >> w[i] >> v[i];
    
    memset(dp, -1, sizeof(dp));
    dp[0][0] = 0;
  
    for (int i = 1; i <= fC; i++) {
      for (int j = 0; j <= cC; j++) {
        dp[i][j] = dp[i - 1][j];
        if (j >= w[i]) dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
        ans = max(ans, dp[i][j]);
      }
    }
    cout << "Teste " << ++test << '\n';
    cout << ans << '\n';
    cout << '\n';
  }
  
  return 0;
}