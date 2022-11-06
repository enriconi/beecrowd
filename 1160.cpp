#include <iostream>

using namespace std;

int main()
{
  int n, a, b, aux;
  float c, d;
  bool sec = false;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a >> b >> c >> d;

    while (a <= b) {
      a += (a * (c / 100));
      b += (b * (d / 100));
      aux++;

      if (aux > 100) {
        sec = true;
        break;
      }
    }

    if (sec) cout << "Mais de 1 seculo." << endl;
    else cout << aux << " anos." << endl;
    
    aux = 0;
    sec = false;
  }
  
  return 0;
}