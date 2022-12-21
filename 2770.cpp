#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int x, y, m;
  int a, b;

  while (cin >> x >> y >> m) {
    if (y > x) swap(x, y);
    
    for (int i = 0; i < m; i++) {
      cin >> a >> b;
  
      if (b > a) swap(a, b);
  
      if (x >= a && y >= b) cout << "Sim" << endl;
      else cout << "Nao" << endl;
    }
  }
  
  return 0;
}