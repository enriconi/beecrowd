#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  int n;
  char a[21];

  cin >> n;
  
  for (int i = 1; i <= n; i++) {
    cin >> a;

    if (strlen(a) == 3 && a[0] == 'U' && a[1] == 'R') {
      if (n != i) cout << "URI ";
      else cout << "URI" << endl;
    } else if (strlen(a) == 3 && a[0] == 'O' && a[1] == 'B') {
      if (n != i) cout << "OBI ";
      else cout << "OBI" << endl;
    } else {
      if (n != i) cout << a << " ";
      else cout << a << endl;
    }
  }
  
  return 0;
}