#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
  int n;

  while (cin >> n && n != 0) {
    int a[n], b[n];

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    copy(a, a + n, b);
    sort(a, a + n);

    int num = a[n - 2];

    for (int j = 0; j < n; j++) {
      if (num == b[j]) cout << (j + 1) << endl;
    }
  }

  return 0;
}