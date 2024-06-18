#include <bits/stdc++.h>

using namespace std;

#define MAXN 50010
#define EPS 1e-9
#define endl '\n'

typedef long long ll;

const int INF = 1000000010;

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int even = 0, odd = 0;
  int arrEven[20], arrOdd[20];
  for (int i = 0; i < 15; i++) {
    int a;
    cin >> a;
    if (a % 2 == 0) {
      arrEven[even] = a;
      even++;
    } else {
      arrOdd[odd] = a;
      odd++;
    }

    if (even == 5) {
      for (int j = 0; j < 5; j++) cout << "par[" << j << "] = " << arrEven[j] << endl;
      even = 0;
    }

    if (odd == 5) {
      for (int j = 0; j < 5; j++) cout << "impar[" << j << "] = " << arrOdd[j] << endl;
      odd = 0;
    }
  }

  for (int j = 0; j < odd; j++) cout << "impar[" << j << "] = " << arrOdd[j] << endl;
  for (int j = 0; j < even; j++) cout << "par[" << j << "] = " << arrEven[j] << endl;

  return 0;
}