#include <bits/stdc++.h>

using namespace std;

#define MAXN 50010
#define endl '\n'

typedef long long ll;

const int INF = 1000000010;

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int n;
  int arr[MAXN], dp[MAXN];
  
  cin >> n;

  for (int i = 0; i < n; i++) cin >> arr[i];  
  dp[0] = arr[0];

  for (int i = 1; i < n; i++)
    dp[i] = max(arr[i], dp[i - 1] + arr[i]);

  int ans = -INF;

  for (int i = 0; i < n; i++)
    ans = max(ans, dp[i]);

  cout << ans << endl;
  
  return 0;
}