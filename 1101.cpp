#include <iostream>

using namespace std;

int main()
{
  int n, m, sum = 0, temp;

  while (cin >> m >> n && (n > 0 && m > 0)) {
    if (n > m) {
      temp = n;
      n = m;
      m = temp;
    }
    
    for (int i = n; i <= m; i++) {
      cout << i << " ";
      sum += i;
    }
    cout << "Sum=" << sum << endl;

    sum = 0;
  }
  
  return 0;
}