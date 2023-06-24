#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
  if (a > b) swap(a, b);
  if (a == 0) return b;
  return gcd(a, b - a);
} 

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  int n, a, b;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    cout << gcd(a, b) << endl;
  }
  
  return 0;
}