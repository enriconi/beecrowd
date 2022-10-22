#include <iostream>

using namespace std;

int main()
{
  int n;
  string p;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> p;
  
    if (p.length() == 5) cout << 3 << endl;
    else if (p[0] == 't' && p[1] == 'w'|| p[0] == 't' && p[2] == 'o' || p[1] == 'w' && p[2] == 'o') cout << 2 << endl;
    else cout << 1 << endl;
  }
  
  return 0;
}