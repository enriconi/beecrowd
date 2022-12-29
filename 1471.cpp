#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  int m, n, a;

  while (cin >> m >> n) {
    vector<int> v;
    bool b = true;
  
    for (int i = 0; i < n; i++) {
      cin >> a;
      v.push_back(a);
    }

    for (int i = 1; i <= m; i++) {
      if (!(count(v.begin(), v.end(), i))) {
        cout << i << " ";
        b = false;
      }
    }

    if (b) cout << "*";
    cout << endl;
  }

  return 0;
}