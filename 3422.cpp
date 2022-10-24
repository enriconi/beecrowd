#include <iostream>

using namespace std;

int main()
{
  int n, m, aux, acrescimo = 0;
  char t[5];
  bool temAcrescimo = false;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> m >> t;

    if (t[0] == 50) {
      if (m > 45) {
        acrescimo = m % 45;
        aux = 45 + m - acrescimo;
        temAcrescimo = true;
      } else {
        aux = 45 + m;
      }
    } else {
      if (m > 45) {
        acrescimo = m % 45;
        aux = m - acrescimo;
        temAcrescimo = true;
      } else {
        aux = m;
      }
    }

    if (temAcrescimo) cout << aux << "+" << acrescimo << endl;
    else cout << aux << endl;

    acrescimo = 0;
    temAcrescimo = false;
  }
  
  return 0;
}