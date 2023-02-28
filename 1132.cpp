#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int n, m;
  unsigned long long sum = 0;

  cin >> n;
  cin >> m;

  if (n > m) swap(m, n);

  for (int i = n; i <= m; i++) {
    if (i % 13 != 0) sum += i;
  }

  cout << sum << endl;
  
  return 0;
}