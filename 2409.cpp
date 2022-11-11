#include <iostream>

using namespace std;

int main()
{
  int a, b, c, n, m;

  cin >> a >> b >> c;
  cin >> n >> m;

  if (a <= n && b <= m) cout << "S" << endl;
  else if (a <= n && c <= m) cout << "S" << endl;
  else if (b <= n && a <= m) cout << "S" << endl;
  else if (b <= n && c <= m) cout << "S" << endl;
  else if (c <= n && a <= m) cout << "S" << endl;
  else if (c <= n && b <= m) cout << "S" << endl;
  else cout << "N" << endl;

  return 0;
}