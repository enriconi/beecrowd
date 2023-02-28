#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int n;

  cin >> n;

  for (int i = 0; i < n; i++) {
    int a, b;
    unsigned long long sum = 0;

    cin >> a >> b;

    if (a > b) swap(b, a);

    for (int i = (a + 1); i < b; i++) {
      if (i % 2 != 0) sum += i;
    }

    cout << sum << endl;
  }
  
  return 0;
}