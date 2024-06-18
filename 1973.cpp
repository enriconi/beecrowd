#include <bits/stdc++.h>

using namespace std;

#define MAXN 1123456
#define EPS 1e-9
#define endl '\n'

typedef long long ll;

const int INF = 1000000010;

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int n, totalS = 0, stars = 0, tmpStars = 0, tmp = 0, nxt = 0;
  int arr[MAXN];
  bool flag = true;
  ll sheep = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    sheep += arr[i];
    tmpStars++;
    if ((arr[i] % 2 == 0 || n - 1 == i) && flag) {
      flag = false;
      stars = tmpStars;
    }
  }

  do {
    nxt = tmp + ((arr[tmp] % 2 == 0 ? -1 : 1));
    if (arr[tmp]) {
      arr[tmp]--;
      sheep--;
    }
    tmp = nxt;
  } while (tmp >= 0 && tmp < n);

  cout << stars << ' ' << sheep << endl;

  return 0;
}