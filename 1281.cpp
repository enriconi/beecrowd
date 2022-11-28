#include <iostream>
#include <iomanip>

using namespace std;

struct fruit {
  string fruit;
  double price;
};

int main()
{
  int n, a, p, q;
  string f;
  float t = 0;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a;

    struct fruit store[a];

    for (int j = 0; j < a; j++) {
      cin >> store[j].fruit >> store[j].price;
    }

    cin >> p;

    for (int k = 0; k < p; k++) {
      cin >> f >> q;
      for (int l = 0; l < a; l++) {
        if (f == store[l].fruit) t += (q * store[l].price);
      }    
    }

    cout << fixed << setprecision(2);
    cout << "R$ " << t << endl;

    t = 0;
  }
  
  return 0;
}