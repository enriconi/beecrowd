#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n;

  cin >> n;

  for (int i = 1; i <= n; i++) {
    string pokemon;
    int lvl, bs, iv, ev;

    cin >> pokemon >> lvl;

    cout << "Caso #" << i << ": " << pokemon << " nivel " << lvl << endl;
    
    cin >> bs >> iv >> ev;
    cout << "HP: " << (int) ((((iv + bs + sqrt(ev) / 8 + 50) * lvl) / 50) + 10) << endl;

    cin >> bs >> iv >> ev;
    cout << "AT: " << (int) ((((iv + bs + sqrt(ev) / 8) * lvl) / 50) + 5) << endl;
    
    cin >> bs >> iv >> ev;
    cout << "DF: " << (int) ((((iv + bs + sqrt(ev) / 8) * lvl) / 50) + 5) << endl;
    
    cin >> bs >> iv >> ev;
    cout << "SP: " << (int) ((((iv + bs + sqrt(ev) / 8) * lvl) / 50) + 5) << endl;
  }

  return 0;
}