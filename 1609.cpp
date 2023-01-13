#include <iostream>
#include <set>

using namespace std;

int main()
{
  int n, m, a;

  cin >> n;

  for (int i = 0; i < n; i++) {
    set<long long> s;
    
    cin >> m;

    for (int j = 0; j < m; j++) {
      cin >> a;
      s.insert(a);
    }
    
    cout << s.size() << endl;
  }

  return 0;
}