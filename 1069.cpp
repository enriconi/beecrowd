#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char a[1001];
  int n, p = 0, aux = 0;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a;

    for (int j = 0; j < strlen(a); j++) {
      if (a[j] == '<') p++;
      else if (a[j] == '>' && p > 0) {
        p--;
        aux++;
      }
    }

    cout << aux << endl;

    p = 0;
    aux = 0;
  }
  
  return 0;
}