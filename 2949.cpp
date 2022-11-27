#include <iostream>

using namespace std;

int main()
{
  int n, a = 0, e = 0, h = 0, m = 0, x = 0;
  string s;
  char r;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> s >> r;
    if (r == 'A') a++;
    else if (r == 'E') e++;
    else if (r == 'H') h++;
    else if (r == 'M') m++;
    else if (r == 'X') x++;
  }

  cout << x << " Hobbit(s)" << endl;
  cout << h << " Humano(s)" << endl;
  cout << e << " Elfo(s)" << endl;
  cout << a << " Anao(oes)" << endl;
  cout << m << " Mago(s)" << endl;
    
  return 0;
}