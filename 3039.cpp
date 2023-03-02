#include <iostream>

using namespace std;

int main()
{
  int n, f = 0, m = 0;
  string s;
  char c;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> s >> c;

    if (c == 'F') f++;
    if (c == 'M') m++;
  }

  cout << m << " carrinhos" << endl;
  cout << f << " bonecas" << endl;
  
  return 0;
}