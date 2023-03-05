#include <iostream>

using namespace std;

int main()
{
  int n;

  while (cin >> n && n != 0) {
    int x, y, dX, dY;

    cin >> dX >> dY;

    for (int i = 0; i < n; i++) {
      cin >> x >> y;
      
      if (x == dX || y == dY) cout << "divisa" << endl;
      else if (x > dX && y > dY) cout << "NE" << endl;
      else if (x < dX && y > dY) cout << "NO" << endl;
      else if (x > dX && y < dY) cout << "SE" << endl;
      else if (x < dX && y < dY) cout << "SO" << endl;
    }
  }
  
  return 0;
}